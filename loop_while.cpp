//while loop in cpp
#include <iostream>
#include <vector>
#include<iterator> // for iterators

using namespace std;

vector<int> numbers = {344, 567, 899, 100, 123};

int main(){
    
    //decalring iterator to a vector
    vector<int>::iterator ptr = numbers.begin();
    cout << "using iterators:" <<endl;

    while (ptr != numbers.end()){
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    cout << endl;
    cout << endl;
    cout << "using auto keyword: "<< endl;

    auto pt = numbers.begin();
    while( pt != numbers.end()){
        cout << *pt << " ";
        pt = next(pt, 1);
    }
    cout << endl;
    cout << endl;
    cout << "using do-while loop:" << endl;

    int i = 0 ;
    do {
        cout << numbers[i] << " ";
        i++;
    }while(i < numbers.size());
    cout << endl;


    return (0);

}
