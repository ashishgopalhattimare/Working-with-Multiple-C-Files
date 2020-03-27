#include<bits/stdc++.h>

#include "Student.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    Student *ashish = new Student("Ashish");
    Student *akash = new Student("Akash");

    ashish->accessClass(akash);
    
    return 0;
}

// How to Compile the Multiple Files (include all the files need to be compiled in cmd)
// > c++ .\main.cpp .\Student.cpp