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
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    cout << "Stdid : ";
    cin >> s1.id;

    cout << "nickname : ";
    cin >> s1.nickname;

    cout << "lineid : ";
    cin >> s1.lineid;

    cout << "phone : ";
    cin >> s1.phone;

    cout << "\n=== Output Student 1 ===\n";
    cout << "ID       : " << s1.id << endl;
    cout << "Nickname : " << s1.nickname << endl;
    cout << "Line ID  : " << s1.lineid << endl;
    cout << "Phone    : " << s1.phone << endl;

    return 0;
}
