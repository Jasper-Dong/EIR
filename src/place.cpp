//
// Created by Jasper on 27/07/2022.
//
#include <string>
#include <regex>

using namespace std;

// define regex patterns to extract location
regex location_pattern(" (at|in|on|to) ([a-z]+)", regex_constants::icase);

// extract the location from a string
string extract_location(string input) {
    smatch match;
    string word = "";

    if (regex_search(input, match, location_pattern)) {
        word = match[2].str();
        if (isupper(word[0]))
            word = "City";
        else
            word[0] = toupper(word[0]);
    }

    return word;
}
