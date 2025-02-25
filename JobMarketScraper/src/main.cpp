#include <iostream>
#include "network.h"

const std::string INDEED = "https://www.indeed.com/jobs?q=c%2B%2B%20developer&l=Seattle%2C%20WA&from=searchOnDesktopSerp%2Cwhatautocomplete";

int main() {

	networking::make_requets(INDEED);
	return 0;
}
