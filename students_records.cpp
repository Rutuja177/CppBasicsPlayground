
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Student class
class Student {
    private:
        int student_id;
        std:: string student_name;

    public:
        Student(int std_id, std::string std_name){
            student_id = std_id;
            student_name = std_name;
        }

        int get_id(){
            return student_id;
        };
        std::string get_name(){
           return student_name;
        };
        
};

//Courses class

class Courses {
    private:
        int course_id;
        std::string course_name;
        unsigned char credits;

    public:
        Courses(int crs_id, string crs_name, unsigned char crs_credits){
        course_id = crs_id;
        course_name = crs_name;
        credits = crs_credits;
        }

        int get_courseId(){
            return course_id;
        }
        std::string get_courseName(){
            return course_name;
        }
        int get_credits(){
            return credits;
        }
};

//Grades class
class Grades{
    private:
        int s_id;
        int c_id;
        unsigned char grades;

    public:
        Grades(int sid, int cid, unsigned char grades1){
            s_id = sid;
            c_id = cid;
            grades = grades1;
    
        };

        int get_std_id(){
            return s_id;
        }
        int get_crs_id(){
            return c_id;
        }
        unsigned char get_grade(){
            return grades;
        }

};

// Student *UTA_student;
// Courses *MSCS_course;
// Grades *UTA_grades;

vector <Student> UTA_students = {Student(1,"Sheldon Cooper"),
                                Student(2, "Missy Cooper"), 
                                Student(3, "John Ryan"), 
                                Student(4, "Micheal Gim")};

vector <Courses> MSCS_course = {Courses(5301,"Data Structure", 3),
                                Courses(5302, "Web Data Managment", 3), 
                                Courses(5303, "Cloud Computing", 3)}; 

vector <Grades> UTA_grades = {Grades(1,5301, 'B'),
                               Grades(1,5302, 'A'),
                               Grades(1,5303, 'C'),

                               Grades(2,5301, 'B'),
                               Grades(2,5302, 'B'),
                               Grades(2,5303, 'A'),

                               Grades(3,5301, 'B'),
                               Grades(3,5302, 'A'),
                               Grades(3,5303, 'A'),

                               Grades(4,5301, 'B'),
                               Grades(4,5302, 'C'),
                               Grades(4,5303, 'A')};
                               

int main(){
    float gpa = 0.0f ;
    float total_points = 0.0f;
    int credits;
    int student_id;

    cout << "Enter a student id: " << endl;
    cin >> student_id;

    bool found = false;

    for (auto grd : UTA_grades){
        if (grd.get_std_id() == student_id){
            found = true;
            float conv_grades = 0.0f;
            int crs_id = grd.get_crs_id(); 
            switch (grd.get_grade()){
            case 'A': 
                conv_grades = 4.0f;
                break;
            case 'B': 
                conv_grades = 3.0f;
                break;
            case 'C': 
                conv_grades = 2.0f;
                break;
            case 'D': 
                conv_grades = 1.0f;
                break;
            case 'F': 
                conv_grades = 0.0f;
                break;
            default:
                continue; // skip invalid grades
            }
            //calculate the total points and credits
            for (auto crs : MSCS_course){
                if(crs.get_courseId() == crs_id && (crs.get_courseId() == crs_id)){
                total_points += crs.get_credits() * conv_grades;
                credits += crs.get_credits();
                }
            }
        
        }
    }
    if (!found){
        cout << "Student is not present" << endl;
    } else {
    gpa = total_points / credits;
    cout << "The student with student ID " << student_id <<" GPA is: "<< gpa << endl;
    }
    return 0;
       
}



