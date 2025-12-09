#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;

    while (true) {
        cin >> guess;

        if (guess == secretNumber) {
            cout << "correct";
            break;
        }
        else if (guess < secretNumber) {
            cout << "low\n";
        }
        else {
            cout << "high\n";
        }
    }

    return 0;
}
