// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id;
	string nickname;
	string lineId;
	string phone;
	double height , weight;
	void input() {
		cout << "Enter ID: ";
		cin.ignore();
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Line ID: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
        cout << "Enter Height (m): ";
        cin >> height;
        cout << "Enter Weight (kg): ";
        cin >> weight;
    }

    void print() {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "Height: " << height << " m" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }

    double calcBMI() {
        return weight / (height * height);
    }
};

int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	s1.input();

	cout << "\n=== Student Info ===\n";
	s1.print();

    
    cout << "BMI : " << s1.calcBMI() << endl;

	return 0;
}

