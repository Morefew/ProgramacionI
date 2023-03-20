//
// Created by leogo on 10/03/23.
//

#include <iostream>

using namespace std;


class UniversityMember {
public:
    String firstName;
    String lastName;
    int ssNo;
};

class Student: UniversityMember {
public
Student()
Student(int mat, )
int matNo;
CourseExecution [] cC; // completed c.
};

class Employee: UniversityMember {
private
int acctNo;

public
CourseExecution [] cE; // supported c.
int getAcctNo{return acctNo};
};

class CourseExecution {
public
    int year;
    ESemester semester;
    Student []student;
    Course course;
    Hashtable support;
// Key: employee
// Value: (role, hours)
};

class Course {
public
    int courseNo = 0;
};

Enumeration ESemester {
winter;
summer;
};

Enumeration ERole{
        lecturer;
        tutor;
        examiner;
};