#include <iostream>
#include <string>
#include "src/intent.h"

using namespace std;

int main() {
    // get input sentence
    //string input = "What is the weather like today?";
    //string input = "What is the weather like in Paris today?";
    string input = "Tell me an interesting fact.";
    //string input = "Tell me a good example.";
    // getline (cin, input);
    cout << input << endl;

    // extract intent word
    string word = extract_intent_word(input);
    cout << word;

    return 0;
}
