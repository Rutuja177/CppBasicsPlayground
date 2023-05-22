//user input in cpp
#include <iostream>
#include <string>

using namespace std;

int main(){
    string firstname, lastname;
    cout << "Enter your firstname: ";
    cin >> firstname;
    cout << "Enter your lastname: ";
    cin >> lastname;
    cout << "Your full name is: " << firstname+ " "+ lastname<< endl  ;
    
}