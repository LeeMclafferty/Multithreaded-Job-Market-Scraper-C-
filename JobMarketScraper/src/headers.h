#pragma once

#include <iostream>
#include <curl/curl.h>
#include <unordered_map>

namespace headers {
	std::unordered_map<std::string, std::string> headers = {
	{"User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/133.0.0.0 Safari/537.36"},
	{"Referer", "https://www.indeed.com/jobs?q=c%2B%2B+developer&l=Seattle%2C+WA&from=searchOnDesktopSerp%2Cwhatautocomplete&vjk=418f4d4ce87a3519"},
	{"Accept", "*/*"},
	{"Accept-Language", "en-US,en;q=0.9"},
	{"Accept-Encoding", "gzip, deflate, br, zstd"},
	{"Sec-Fetch-Site", "same-origin"},
	{"Sec-Fetch-Mode", "cors"},
	{"Sec-CH-UA", "\"Windows\""}
	};

	curl_slist* get_header();
	void free_headers(curl_slist* sList);

}