//
// Created by Jasper on 27/07/2022.
//
#include <string>
#include <regex>

using namespace std;

// define regex patterns to extract words
// with (in)definite article
regex de_word_pattern("the ([a-z]+)");
regex ind_word_pattern("an* ([a-z]+) ([a-z]+)");

// extract the intent word from a string
string extract_intent_word(string input) {
    smatch match;
    string word = "";

    if (regex_search(input, match, de_word_pattern))
        word = match[1].str();
    else {
        regex_search(input, match, ind_word_pattern);
        word = match[2].str();
    }
    word[0] = toupper(word[0]);

    return word;
}
