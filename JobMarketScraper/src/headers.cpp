#include "headers.h"

namespace headers {

    std::unordered_map<std::string, std::string> headerMap = {  // Define headers here (only once!)
    {"User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/133.0.0.0 Safari/537.36"},
	{"Cookie", "Cookie: mobnode=1; CTK=1ikqa43g82ebq000; CSRF=PyzNRbaIxQVhn5gLqI5hUaPY3u9Ocla0; SURF=khTCYYZBSj3IVsp87mQ5K2Hw9Pnua8Cv; SOCK=\"QIvdUvvtmht-V2t_uXFfgVHUX1g=\"; SHOE=\"Cr43_ClhdMbRNFJ_bX7BhXY4Rx138pk16unTZ_aE7Ut93BJ3zWy6cPjUuYp79ElceyiGDVLVNbjwCkFp8z45suqkbsIcfnQUh4_REzcKud3GpNAcs8dRhUO5CXmlFFDSvKfsLn1EDm7xkaNttEcCTYHN\"; ENC_CSRF=EF9cnlLcZKIupMgBdmsNfJwbgfOY2RVX; SHARED_INDEED_CSRF_TOKEN=ZeWPMZ3F7cgOEsw2ffrEPurTnsI9FUck; MICRO_CONTENT_CSRF_TOKEN=M3QKy68yatw1NH39DC3FaKUmJHa1Upv9; LC=\"co=US&hl=en_US\"; _gcl_au=1.1.578287686.1740355131; _ga=GA1.2.290378389.1740355131; _cfuvid=L9XLb20fwDAag5xUgHQrq8BdgJh1fTUOivZK.TkVJmU-1740364208037-0.0.1.1-604800000; _gid=GA1.2.2766647.1740455856; IA_APPLIED=241f7a11a3dae0b7; __cf_bm=rskVvNsTsDpe_6fYkieq3YZayxy3OWYIl66y0g1yXBM-1740533760-1.0.1.1-2zjy1l4vX12OebZ2XBrlG9LDaoHJ1w4X4xWuXKrRpvxH2H92u_PUXuQtMlhZHqL50viz84WlLKGcBR3d3CAwVQ; cf_clearance=t41e_MJWgc3ubyV._JoYh0nDF01f05O9TB4uDEPmaMY-1740533763-1.2.1.1-FVjcQaCrYuyPc6HLhFGA0qlHN0LdIKPMUEYzdwK1OWHtzD1Qzj1aZLZOODDUn7TnK8N1iu6p3bsigAPOlJkG4mmazH08k0HzaEU2RYL1rp_RQgA5vnO7j52gx6VHEjGwjNFlj62foydHM4hNOw0P3LJ7NOYxjFiSWrs9L.Ysld2w5SyYswUbcZprjVoyqik0PbDGtatMYPI6BfuaMYa3F.517Dv7M7pCTx.7mJrrMwzNP7DmXtWa73NbNoNQT2uO4zu5C.feADjwY8HIkja8V5Qq3kWoWEt8zfS2bL85ZGE8xltnrBtI9RXQHsKGVAO8arLeNtA6s4Q76ZuA.utWgQ; __cf_bm=TvjEsGG94TkAsTNwEqwuJxdejKQ1cARnqG4I7XB5TIo-1740534247-1.0.1.1-yyflB2dUs4MKfnDOtqThS1BMjErgNuIGBVctl4AIi4.0FfzjPAeUY9deXXs79S5Z.3DwSJwcTxq0JYiLgmI62Q; PPID=eyJraWQiOiIwODUwOWM1ZS1kNmQxLTQwYzMtYWUwZC05ZjY3NzE4MWJmOWYiLCJ0eXAiOiJKV1QiLCJhbGciOiJFUzI1NiJ9.eyJzdWIiOiI3YTM5YTFkNmI0ZDRkOTM4IiwibGFzdF9hdXRoX3RpbWUiOjE3NDAzNTQyMzc1MjQsImVtYWlsX3ZlcmlmaWVkIjp0cnVlLCJwaG9uZV9zY29wZSI6W10sImF1dGgiOiJnb29nbGUiLCJjcmVhdGVkIjoxNjczMzgzNjcyMDAwLCJpc3MiOiJodHRwczovL3NlY3VyZS5pbmRlZWQuY29tIiwibGFzdF9hdXRoX2xldmVsIjoiU1RST05HIiwibG9nX3RzIjoxNzQwMzU0MjM3NTI0LCJhdWQiOiJjMWFiOGYwNGYiLCJwaG9uZV92ZXJpZmllZCI6dHJ1ZSwicmVtX21lIjp0cnVlLCJwaG9uZV9udW1iZXIiOiIrMTg1OTc0MzgzMDgiLCJleHAiOjE3NDA1MzYwNTIsImlhdCI6MTc0MDUzNDI1MiwiZW1haWwiOiJsZWUubWNsYWZmZXJ0eUBnbWFpbC5jb20ifQ.qdrqZYSfo5jZZKAgQmxAcOUzcCdPPPLtO3oXBTsBlC7w9O3FzuZPmerBthPw1WYEX6iiX8l2SszYxwSJ8q7H-A"},
    {"Referer", "https://www.indeed.com/jobs?q=c%2B%2B+developer&l=Seattle%2C+WA&from=searchOnDesktopSerp%2Cwhatautocomplete&vjk=418f4d4ce87a3519"},
    {"Accept", "*/*"},
    {"Accept-Language", "en-US,en;q=0.9"},
    {"Sec-Fetch-Site", "same-origin"},
    {"Sec-Fetch-Mode", "cors"},
    {"Sec-CH-UA", "\"Windows\""}
    };


    curl_slist* get_header_sList() {
        curl_slist* sList = nullptr;
        for (auto& header : headerMap) {
            std::string h = header.first + ": " + header.second;
            sList = curl_slist_append(sList, h.c_str());
        }
        return sList;
    }
}
