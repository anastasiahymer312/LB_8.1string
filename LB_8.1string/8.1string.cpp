#include <iostream>
#include <string>

using namespace std;

// Функція для підрахунку входжень "abc"
int countOccurrences(const string& str) {
    int count = 0;
    size_t pos = 0;

    // Знайти всі входження "abc"
    while ((pos = str.find("abc", pos)) != string::npos) {
        count++;
        pos += 3; 
    }

    return count; 
}

// Функція для заміни "abc" на "**"
string replaceOccurrences(string str) {
    size_t pos = 0;

    
    while ((pos = str.find("abc", pos)) != string::npos) {
        str.replace(pos, 3, "**"); // Заміна "abc" на "**"
        pos += 2; 
    }

    return str; 
}


int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    int occurrences = countOccurrences(str); // Підрахунок входжень
    cout << "Number of 'abc' occurrences: " << occurrences << endl;
    string modifiedStr = replaceOccurrences(str); // Замінюємо "abc" на "**"
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
