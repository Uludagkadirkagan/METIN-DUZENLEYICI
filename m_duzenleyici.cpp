

// KADÝR KAÐAN ULUDAÐ  29/02/2024  01:30


#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

// Geri alma iþlemleri için stack kullanýlacak
stack<string> history;

// Metin verisini saklamak için bir string
string text;

// Komutlarý iþleyen fonksiyonlar
void append(const string& s) {
    text += s;
    history.push(text);
}

void deleteChars(int k) {
    if (k >= text.length()) {
        text = "";
    }
    else {
        text = text.substr(0, text.length() - k);
    }
    history.push(text);
}

void print(int k) {
    if (k >= text.length()) {
        cout << text << endl;
    }
    else {
        cout << text.substr(0, k) << endl;
    }
}

void undo() {
    if (!history.empty()) {
        history.pop();
        if (!history.empty()) {
            text = history.top();
        }
        else {
            text = "";
        }
    }
}

void save(const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << text;
        file.close();
    }
    else {
        cout << "Dosya acilamadi!" << endl;
    }
}

int main() {
    char choice;
    do {
        cout << "Komut seciniz: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            string data;
            cout << "Eklenecek veri: ";
            cin >> data;
            append(data);
            break;
        }
        case '2': {
            int k;
            cout << "Silinecek karakter sayisi: ";
            cin >> k;
            deleteChars(k);
            break;
        }
        case '3': {
            int k;
            cout << "Yazdirilacak karakter sayisi: ";
            cin >> k;
            print(k);
            break;
        }
        case '4': {
            undo();
            break;
        }
        case '5': {
            string filename;
            cout << "Dosya adi: ";
            cin >> filename;
            save(filename);
            return 0; // Program sonlanýr
        }
        default:
            cout << "Gecersiz secim!" << endl;
        }
    } while (true);

    return 0;
}

