#include <iostream>
#include <string>
using namespace std;

int main() {
    string STD_Name;
    int STD_AGE;
    float STD_Height;

    cout << "Enter your name: ";
    getline(cin, STD_Name);

    cout << "Enter your age: ";
    cin >> STD_AGE;

    cout << "Enter your Height(cm): ";
    cin >> STD_Height;

    cout << "\n------- Student Profile -------" << endl;
    cout << "Name: " << STD_Name << endl;
    cout << "Age : " << STD_AGE << endl;
    cout << "Height: " << STD_Height << " cm" << endl;
    cout << "-------------------------------" << endl;

    return 0;
}
