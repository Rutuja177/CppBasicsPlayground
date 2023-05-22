#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

ifstream inTextFile;
string str;


int main(){
 inTextFile.open("test.txt");
 if (inTextFile.fail()){
    cout << endl << "File not found!" << endl;
 }
 else {
    while(!inTextFile.eof()){
        getline(inTextFile, str),
        cout << str << endl;
    }
inTextFile.close();
 }
}
