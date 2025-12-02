// LAB0302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string name, id, grade;
    cout << "---------- Student Report ----------\n";
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter score: ";
    cin >> score;

    if (score <= 100 && score >= 90) {
        grade = "A";
    }
    else if (score <= 89 && score >= 80) {
        grade = "B";
    }
    else if (score <= 79 && score >= 70) {
        grade = "C";
    }
    else if (score <= 69 && score >= 60) {
        grade = "D";
    }
    else if (score < 60 && score >= 0) {
        grade = "F";
    }
    else {
        grade = "Error";
    }

    cout << "Grade : " << grade;
    cout << "\n------------------------------------";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
