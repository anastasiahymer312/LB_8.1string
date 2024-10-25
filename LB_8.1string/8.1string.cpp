#include <iostream>
#include <string>

using namespace std;

// ������� ��� ��������� �������� "abc"
int countOccurrences(const string& str) {
    int count = 0;
    size_t pos = 0;

    // ������ �� ��������� "abc"
    while ((pos = str.find("abc", pos)) != string::npos) {
        count++;
        pos += 3; 
    }

    return count; 
}

// ������� ��� ����� "abc" �� "**"
string replaceOccurrences(string str) {
    size_t pos = 0;

    
    while ((pos = str.find("abc", pos)) != string::npos) {
        str.replace(pos, 3, "**"); // ����� "abc" �� "**"
        pos += 2; 
    }

    return str; 
}


int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    int occurrences = countOccurrences(str); // ϳ�������� ��������
    cout << "Number of 'abc' occurrences: " << occurrences << endl;
    string modifiedStr = replaceOccurrences(str); // �������� "abc" �� "**"
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
