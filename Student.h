#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person{
protected :
int yearLevel;
string major ;
public:
Student();
Student( int yearLevel , string major );
~Student();
display ();
};


#endif
