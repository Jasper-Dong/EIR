#include <iostream>
#include <string>
#include "src/intent.h"
#include "src/place.h"

using namespace std;

int main() {
    // get input sentence
    string input;
    getline (cin, input);

    // extract intent
    string intent = extract_intent(input);
    // extract location
    string place = extract_location(input);

    cout << "Intent: " << intent << " " << place;
    return 0;
}
