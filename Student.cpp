/**
 * < Where the Body of the class file goes >
 * */

#include "Student.h"

#include <bits/stdc++.h>
using namespace std;

// Constructor for the Class
Student::Student()
{  
    this->name = "<>";
    cout << "Default Student Constructor called" << endl;
}

Student::Student(string name)
{
    this->name = name;
    cout << "Overload Student Constructoor called" << endl;
}

void Student::accessClass(Student *other)
{    
    cout << this->name << " is calling " << 
    other->getName() << endl;
}

string Student::getName() {
    return name;
}