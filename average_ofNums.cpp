//Avg of nums in array:

#include <iostream>
#include <vector>

using namespace std;

int num, sum=0;

float average;

int main(){
    cout << "Enter a number for array size" << endl;
    cin >> num;
    //If you want a dynamically-sized object, 
    //you can access heap-based memory with some form of the new operator 
    vector<int> array_num(num);
    cout << "Enter elements in an array:";
    for (int i =0 ; i < num; i++){
        cin >> array_num[i];
    }
    cout << "This is your array: ";
    cout <<"[" ;
    for (int i =0 ; i < num; i++){
        cout << array_num[i] << " ";
        sum += array_num[i];
    }
    cout << "]";
    average = sum/num;
    cout << "Sum: " << sum << endl;
    cout << "Average of "<< num << " numbers is: " << average << endl;

}