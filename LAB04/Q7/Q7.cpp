#include <iostream>
#include <string>
using namespace std;

string isPrime(int n) {
    if (n <= 1) return "Not Prime";
    if (n == 2) return "Prime";
    if (n % 2 == 0) return "Not Prime";

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return "Not Prime";
    }
    return "Prime";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << isPrime(num);
}
