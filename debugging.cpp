#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    string dept_name;
    int roll;
    int b;
    float x;
    float y;

};



int main() {

    student s1,s2;
    s1.name = "Mahnudul";
    s1.roll = 240106;

    s2.name = "Arnob";
    s2.roll = 240123;

    cout << s1.name << endl;
    return 0;
}