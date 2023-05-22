//for loop in cpp
#include <iostream>
#include <vector>
#include<iterator> // for iterators

using namespace std;

vector<int> numbers = {344, 567, 899, 100, 123};
float average;

int main(){
    average = 0.0f;
    for(int i = 0; i<numbers.size(); i++)
        average += numbers[i];

    average /= numbers.size();
    cout << "Average: " << average << endl;

    //different for loop
    //specify the var to traverese the container, colon, name of the container
    for(auto x: numbers)
        average +=x;
    average /= numbers.size();
    cout << "Average: " << average << endl;
    
    return(0);
}