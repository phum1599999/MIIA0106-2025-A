#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	int id;
	string nickname;
};
int main()
{
	Student s1;
	Student* p = nullptr;
    // 2) ให้ pointer p ชี้ไปที่ s1
    p = &s1;

    // 3) กำหนดค่าโดยใช้ p->
    p->id = 30010;
    p->nickname = "Phum";

    // 4) แสดงผลโดยใช้ p->
    cout << "ID: " << p->id << endl;
    cout << "Nickname: " << p->nickname << endl;

	return 0;
}
