#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
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
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];

    // TODO: วนรับข้อมูล size คน
    for (int i = 0; i < N; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name[i]);
        cout << "Enter ID of student " << i + 1 << ": ";
        getline(cin, id[i]);

        double total = 0;
        // TODO: วนรับคะแนน 4 วิชา
        for (int j = 0; j < 4; j++) {
            double subjectScore;
            cout << "Enter score for subject " << j + 1 << ": ";
            cin >> subjectScore;
            total += subjectScore;
        }
        score[i] = total;
        // TODO: คำนวณเกรด
        calculateGrade(total, grade[i]);
        cin.ignore(); // clear the newline character
    }

    // TODO: วนแสดงผล size คน ด้วย displayStudentInfo
    for (int i = 0; i < N; i++) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
        cout << endl;
    }

    return 0;
}
