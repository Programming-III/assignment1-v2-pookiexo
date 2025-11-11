#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================



Person::Person ( string name , int id ){
this -> name = name;
this -> id = id;
};
Person::~Person();
void Person::display { 
cout<< "personName is:" << name<<endl;
cout<< "personId is:" << Id <<endl;
};


// ==================== Student Class Implementation ====================

Student::Student ( int yearLevel ,string major ){
this -> yearLevel = yearLevel;
this -> major = major;
};
Student::~Student();
void Person::display{
cout<< "The yearLevel is :" << yearLevel <<endl;
cout<< " The major is :" << major <<endl;
};



// ==================== Instructor Class Implementation ====================

Instructor::Instructor( string department , int experienceYears ){
this -> department  = department;
this -> experienceYears = experienceYears;
};
Instructor::~Instructor();
void Instructor::display{
cout<< "The department is:" << department <<endl;
cout<< "The experienceYears is:" << experienceYears <<endl;
};



// ==================== Course Class Implementation ====================


Course::Course( string courseCode, string courseName, int maxStudents, student* students, int currentStudents);{
this -> courseCode  = courseCode;
this -> courseName = courseName;
this -> maxStudents  = maxStudents;
this -> student* students = student* students;
this -> currentStudents  = currentStudents;
};
Course::~Course();
void Course:: displayCourseInfo{
cout<<"courseCode is :" << courseCode<<endl;
cout << "courseName is "<< courseName<<endl;
cout << "maxStudents  is "<< maxStudents <<endl;
cout << "student* students is "<< student* students<<endl;
cout << "currentStudents "<< currentStudents<<endl;
};
void Course:: addStudent(const Student& s ){
   return student;
}:




// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
