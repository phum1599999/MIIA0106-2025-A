#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineid;
    string phone;
};

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
    // TODO
    Student temp = a;
    a = b;
    b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}


void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
        cout << "----------------------\n";
        cout << "ID       : " << students[i].id << endl;
        cout << "Nickname : " << students[i].nickname << endl;
        cout << "Line ID  : " << students[i].lineid << endl;
        cout << "Phone    : " << students[i].phone << endl;
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]..
        cout << "Stdid : ";
        cin >> students[i].id;
        cout << "nickname : ";
        cin >> students[i].nickname;
        cout << "lineid : ";
        cin >> students[i].lineid;
        cout << "phone : ";
        cin >> students[i].phone;
        cout << endl;
        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
