#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char* name;
    cout << "Enter your name: ";
    cin >> name;

    for (int i = name.length() - 1; i >= 0; i--) { // ���������� ������ �� ����������
        cout << name[i]; // ��������� ��� � �����
    }

    cout << endl;

    cout << "----------------------------------";

    char* text;
    cout << "Enter text: ";
    cin.ignore();
    getline(cin, text);

    for (int i = 2; i < text.length(); i += 3) {
        text[i] = toupper(text[i]); // ������ ������ ������ ������ �������
    }

    cout << text << endl;
    return 0;

    cout << "----------------------------"

        char* text2;
    cout << "Enter text: ";
    getline(cin, text);

    for (char& c : text2) {
        if (c == 'A') c = '@';
        else if (c == 'C') c = '#';
        else if (c == 'M') c = '&';
    }

    cout << text << endl;
}
