//classes in cpp
#include <iostream>
#include <string>

using namespace std;

enum cow_purposes {dairy, meat, hide, pet};

class cow{
    public:
        string name;
        cow(string name_user, int age_user, unsigned char purpose_user){
            name = name_user;
            age = age_user;
            purpose = purpose_user;
        }
        string get_name(){
            return name;
        }
        int get_age(){
            return age;
        }
        unsigned char get_purpose(){
            return purpose;
        }
        
    private:
        int age;
        unsigned char purpose;
};


cow *my_cow ; 

int main(){
    my_cow = new cow("Besty", 5, pet);
   
    cout << my_cow ->get_name()<< " is a type - " << (int) my_cow->get_purpose() << " cow, which is " << my_cow->get_purpose() <<". ";
    cout << "Her age is " << my_cow->get_age() << " old." <<endl;
    delete my_cow; //destructor
}