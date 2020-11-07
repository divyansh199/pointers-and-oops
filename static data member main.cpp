#include<iostream>
using namespace std;
#include "static data member.cpp"

int main()
{
	student s1;
	student s2;
	s1.totalstudents=20;
	cout<<s1.rollnumber<<" "<<s1.age<<endl;//garbage dala hoga default constuctor ne
	cout<<s2.totalstudents;
	cout<<student::totalstudents<<endl;
}
