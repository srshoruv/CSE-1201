#include <iostream>
using namespace std;

class CRectangle
    {
        int width, height;
        public:
        void set_values(int, int);
        int area() 
        {
            return width * height;
        }
    };

    void CRectangle:: set_values(int a, int b)
    {
        width = a;
        height = b;
    }

int main() {
    

    CRectangle reca;

    reca.set_values(2,3);
    cout << "The area is: " << reca.area() << endl;


    return 0;
}