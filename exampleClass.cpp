#include <iostream>
using namespace std;

class Person
{
    char name[30];
    int age;

    public:
    void getData(void);
    void display(void);
};

void Person:: getData(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void Person:: display(void)
{
    cout << "Hello, " << name << endl;
    cout << "You're " << age << " Years old." << endl;
}


int main() {
    Person p;
    p.getData();
    p.display();
    return 0;
}