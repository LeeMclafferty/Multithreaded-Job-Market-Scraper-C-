#include "headers.h"

curl_slist* headers::get_header() {
	curl_slist* sList = nullptr;

	for (auto header : headers) {
		std::string h = header.first + ": " + header.second;
		sList = curl_slist_append(sList, h.c_str());
	}

	return sList;
}

void headers::free_headers(curl_slist* sList) {

}
