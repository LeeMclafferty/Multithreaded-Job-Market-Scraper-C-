#include "network.h"

size_t networking::write_callback(void* contents, size_t size, size_t nmemb, std::string* output)
{
	output->append((char*)contents, size * nmemb);
	return size * nmemb;
}

void networking::make_requets(std::string reqUrl) {
	CURL* curl;
	CURLcode res;
	std::string response;

	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();

	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, reqUrl);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
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
}

