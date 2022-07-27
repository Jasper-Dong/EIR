//
// Created by Jasper on 27/07/2022.
//
#include <string>
#include <regex>
#include "intent.h"

using namespace std;

regex de_noun_pattern("the ([a-z]+) ");
regex ind_noun_pattern("an* ([a-z]+) ([a-z]+)");

string extract_intent_word(string input) {
    smatch match;
    string noun = "";

    if (regex_search(input, match, de_noun_pattern))
        noun = match[1].str();
    else {
        regex_search(input, match, ind_noun_pattern);
        noun = match[2].str();
    }
    noun[0] = toupper(noun[0]);

    return noun;
}
