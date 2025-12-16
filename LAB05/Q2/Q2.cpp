#include <iostream>
#include <string>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int a, b, c;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;

    cout << "Maximum value is: " << maxOfThree(a, b, c) << endl;
    return 0;
}

