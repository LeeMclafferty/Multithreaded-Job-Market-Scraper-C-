#include <iostream>
#include <curl/curl.h>

std::string INDEED = "https://www.indeed.com/jobs?q=c%2B%2B%20developer&l=Seattle%2C%20WA&from=searchOnDesktopSerp%2Cwhatautocomplete";

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
	output->append((char*)contents, size * nmemb);
	return size * nmemb;
}

int main() {
	CURL* curl;
	CURLcode res;
	std::string response;

	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();

	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, INDEED);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

		res = curl_easy_perform(curl);

		if (res != CURLE_OK) {
			std::cerr << "cURL Error: " << curl_easy_strerror(res) << std::endl;
		}
		else {
			std::cout << "Response:\n" << response << std::endl;
		}

		curl_easy_cleanup(curl);
	}

	curl_global_cleanup();
	return 0;
}
