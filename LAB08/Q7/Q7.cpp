#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};

struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {
	string id;
	string nickname;
	string lineid;
	Phone myContact;
	Parent myParent;
};

void inputstd(Student& s) {
	cout << "Enter Student ID: ";
	cin >> s.id;
	cout << "Enter Nickname: ";
	cin >> s.nickname;
	cout << "Enter Line ID: ";
	cin >> s.lineid;

	cout << "=== My contact ===" << endl;
	cout << "phone Mobile: ";
	cin >> s.myContact.mobile;
	cout << "phone Home: ";
	cin >> s.myContact.home;

	cout << "=== Parent information ===" << endl;
	cout << "Parent Name: ";
	cin >> s.myParent.name;
	cout << "Relationship: ";
	cin >> s.myParent.relationship;
	cout << "Mobile: ";
	cin >> s.myParent.contact.mobile;
	cout << "Home: ";
	cin >> s.myParent.contact.home;
}

void outputstd(const Student& s) {
	cout << "\nStd information\n";
	cout << "ID (id): " << s.id << endl;
	cout << "Nickname (nickname): " << s.nickname << endl;
	cout << "Line ID (lineId): " << s.lineid << endl;

	cout << "\nStd Contact\n";
	cout << "Mobile Number (mobile): " << s.myContact.mobile << endl;
	cout << "Home Number (home): " << s.myContact.home << endl;

	cout << "\nParent Information\n";
	cout << "Parent's Name (name): " << s.myParent.name << endl;
	cout << "Relationship (relationship): " << s.myParent.relationship << endl;

	cout << "\nParent Contact\n";
	cout << "Parent's Mobile Number (mobile): " << s.myParent.contact.mobile << endl;
	cout << "Parent's Home Number (home): " << s.myParent.contact.home << endl;
}

int main() {
	Student s;

	inputstd(s);
	outputstd(s);

	return 0;
}