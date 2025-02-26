#pragma once
#include <iostream>
#include <curl/curl.h>

namespace networking {
	size_t write_callback(void* contents, size_t size, size_t nmemb, std::string* output);
	void make_request(std::string reqUrl);
    
}