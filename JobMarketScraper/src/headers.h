#pragma once

#include <curl/curl.h>
#include <unordered_map>
#include <string>

namespace headers {

	extern std::unordered_map<std::string, std::string> headerMap;  // Declare headers map (extern prevents multiple definitions)

	curl_slist* get_header_sList();
}
