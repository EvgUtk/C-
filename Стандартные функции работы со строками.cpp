#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string shortest_word = "";
    for (int i = 0; i < sentence.size();) {
        int start = i;
        while (i < sentence.size() && !isspace(sentence[i]) && !ispunct(sentence[i])) {
            i++;
        }
        int end = i;

        string word = sentence.substr(start, end - start);

        if (shortest_word == "" || word.size() < shortest_word.size()) {
            shortest_word = word;
        }

        while (i < sentence.size() && (isspace(sentence[i]) || ispunct(sentence[i]))) {
            i++;
        }
    }

    cout << "The shortest word in the sentence is: " << shortest_word << endl;

    return 0;
}