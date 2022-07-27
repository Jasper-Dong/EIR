#include <iostream>
#include <string>
#include "src/intent.h"
#include "src/place.h"

using namespace std;

int main() {
    // get input sentence
    //string input = "What is the weather like today?";
    //string input = "What is the weather like in Paris today?";
    //string input = "Where is the mensa at school?";
    string input = "Give me the train information to Berlin.";
    //string input = "Tell me an interesting fact.";
    //string input = "Tell me a good example.";
    // getline (cin, input);
    cout << input << endl;

    // extract intent word
    string word = extract_location(input);
    cout << word;

    return 0;
}
