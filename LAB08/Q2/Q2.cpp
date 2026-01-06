#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineid;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    for (int i = 0; i < SIZE; i++) {
        cout << "Stdid : ";
        cin >> students[i].id;

        cout << "nickname : ";
        cin >> students[i].nickname;

        cout << "lineid : ";
        cin >> students[i].lineid;

        cout << "phone : ";
        cin >> students[i].phone;

        cout << endl;
    }

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
    for (int i = 0; i < SIZE; i++) {
        cout << "Std No." << i + 1 << " id:" << students[i].id << " name:" << students[i].nickname << " lineid:" << students[i].lineid << " phone:" << students[i].phone << endl;
    }

    return 0;
}
