#include <iostream>

using namespace std;

int a = 1997;
int *ptr;

int main(){
    ptr = &a;
    cout << "The content of a is " << a << endl; //1997
    cout << "ptr in main function point to address " << ptr << endl; //will show address value
    cout << "the address of a" << &a << endl; //same value as ptr; address of a
    cout << "where ptr is pointing " << *ptr << endl; //1997
    cout << "the address of ptr" << &ptr << endl; // address of ptr which is different


}