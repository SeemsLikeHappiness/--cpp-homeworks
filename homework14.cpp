#include <iostream>
#include <vector>
#include <string>

    using namespace std;

    vector<bool> flickSwitch(const vector<string>& words) {
        vector<bool> result;
        bool current = true;

        for (const string& word : words) {
            result.push_back(current);

            if (word == "flick") {
                current = !current;
            }
        }

        return result;
    }

    void printBoolVector(const vector<bool>& vec) {
        cout << "[";
        for (size_t i = 0; i < vec.size(); i++) {
            cout << (vec[i] ? "true" : "false");
            if (i != vec.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
    }

    void printStringVector(const vector<string>& vec) {
        cout << "[";
        for (size_t i = 0; i < vec.size(); i++) {
            cout << "\"" << vec[i] << "\"";
            if (i != vec.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
    }

    int main() {
        setlocale(LC_ALL, "Russian");
        vector<vector<string>> testCases = {
            {"codewars", "flick", "code", "wars"},
            {"flick", "chocolate", "adventure", "sunshine"},
            {"bicycle", "jarmony", "flick", "sheep", "flick", "wolf"}
        };

        for (int i = 0; i < testCases.size(); i++) {
            cout << "Пример " << (i + 1) << ":" << endl;
            cout << "Входные данные: ";
            printStringVector(testCases[i]);
            cout << endl;

            vector<bool> result = flickSwitch(testCases[i]);

            cout << "Выходные данные: ";
            printBoolVector(result);
            cout << endl << endl;
        }

        int n;
        cin >> n;

        if (n <= 0 || n > 100) {
            cout << "Количество слов должно быть от 1 до 100!" << endl;
            return 1;
        }

        vector<string> userWords(n);
        cout << "Введите слова (каждое с новой строки, только строчные буквы):" << endl;

        for (int i = 0; i < n; i++) {
            cin >> userWords[i];
        }

        cout << "\nВаша последовательность: ";
        printStringVector(userWords);
        cout << endl;

        vector<bool> userResult = flickSwitch(userWords);
        cout << "Результат: ";
        printBoolVector(userResult);
        cout << endl;

        return 0;
    }