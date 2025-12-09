// Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input,position;

    while (true) {
        cout << "กรอกตำแหน่งเส้นเป็นตัวย่อ L-(LEFT) R-(RIGHT) C-(CENTER) : ";
        cin >> input;

        if(input == "L" || input == "l") {
            cout << "เส้นอยู่ทางซ้าย -> รถเลี้ยวซ้าย\n";
        }
        else if (input == "R" || input == "r") {
            cout << "เส้นอยู่ทางขวา -> รถเลี้ยวขวา\n";
        }
        else if (input == "C" || input == "c") {
            cout << "เส้นอยู่กลาง -> รถวิ่งตรงไปข้างหน้า\n";
        }
        else {
            cout << "ข้อมูลไม่ถูกต้อง! ให้กรอก L, R, C เท่านั้น\n";
        }
    }
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
