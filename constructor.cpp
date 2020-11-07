//understanding constructor
//same name as class
//no return type
//no input arguments
//for every object constructor is called
//default constructor allot garbage value for data mambers
//for every object only one constructor is created if paramaterized created then no default is created
#include<iostream>
using namespace std;
#include "class.cpp"

int main()

{
	Student s1(10,100);
	cout<<"address"<<&s1;
	
	/*
	Student s1;
	s1.display();
	
	Student s2;
	
	Student *s3=new Student;
	s3->display();
	
	cout<<"paramatrized constructor demo"<<endl;
	Student s4(10);
	s4.display();
	
	//dynamically
	Student*s5=new Student(101);
	s5->display();
	
	Student s6(10,5);
	s6.display();
	
	*/
}
