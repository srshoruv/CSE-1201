//
// Created by Shahidur Rahman Shoruv on 9/5/25.
//
#include <iostream>
using namespace std;

#define nl << endl

template <class T>

void swapIng(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 10;
    int y = 20;
    swapIng(x,y);
    cout << x << y nl;
}