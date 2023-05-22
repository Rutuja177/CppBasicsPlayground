#include <iostream>
#include <string>

using namespace std;

int a, b = 5; //global varibales 

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    cout << "a = " << a << endl; //7
    cout << "b = " << b <<endl; //5
    cout << "flag = " << my_flag <<endl; //false
    my_flag = true;
    cout << "a + b = " << a + b << endl; //12
    cout << "a - b = " << a - b <<endl; //2
    cout << "flag = " << my_flag <<endl; //true
}