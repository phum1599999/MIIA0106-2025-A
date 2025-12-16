#include <iostream>
#include <string>
using namespace std;

// Call by Value
void Call_by_Value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void Call_by_Reference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a,b;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;

    // ก่อน
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    Call_by_Value(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    Call_by_Reference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}
