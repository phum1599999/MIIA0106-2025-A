#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Total Score : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore(); // เคลียร์ newline ก่อน getline

    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];
    int i=0;
    // TODO: วนรับข้อมูล size คน
    while(i < size) {

        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name[i]);

        cout << "Enter ID of student " << i + 1 << ": ";
        getline(cin, id[i]);

        cout << "Enter scores: ";
        cin >> score[i];
        cin.ignore();
        
        // TODO: calculateGrade(score[i], grade[i]);
        calculateGrade(score[i], grade[i]);
        i++;
    }
    int j=0;
    // TODO: วนแสดงผล size คน ด้วย displayStudentInfo
    while (j < size) {
        cout << endl;
        displayStudentInfo(name[j], id[j], score[j], grade[j]);
        j++;
    }

    // TODO: delete[] ให้ครบทุกตัวแปร
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}