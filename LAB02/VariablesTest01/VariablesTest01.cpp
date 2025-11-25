#include <iostream>
#include <string>
using namespace std;

int main() {
	int STD_AGE = 18;
	const string STD_ID = "6811130010";
	string STD_Name = "Pakaphum juntawong";
	float STD_GPA = 4.00;

	cout << "\n----------- Student Profile ----------" << endl;
	cout << "Name		: " << STD_Name << endl;
	cout << "Age		: " << STD_AGE	<< endl;
	cout << "Student ID	: " << STD_ID	<< endl;
	cout << "GPA		: " << STD_GPA	<< endl;
	cout << "----------------------------------------" << endl;

	return 0;
}
