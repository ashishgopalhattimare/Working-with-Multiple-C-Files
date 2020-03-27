/**
 * Header File for the Student class where Function
 * prototype and variable declaration would be
 * initialized
 * 
 * < Where the title of the class goes >
 * */

#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:     // Constructors
        Student();
        Student(string name);
    
    public:     // Getters
        string getName();

        void accessClass(Student *student);

    private:    // Variables
        string name;
};

#endif // STUDENT_H