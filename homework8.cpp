#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string word;

    cout << "Введите строку: ";
    getline(cin, word);

    bool isIsogram = true;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == ' ') {
            continue;
        }

        for (int j = i + 1; j < word.length(); j++) {
            if (word[j] == ' ') {
                continue;
            }

            if (word[i] == word[j]) {
                isIsogram = false;
                break;
            }
        }

        if (!isIsogram) {
            break;
        }
    }

    cout << (isIsogram ? "true" : "false") << endl;

    return 0;
}