//how class and object build
#include<bits/stdc++.h>
using namespace std;
#include "class.cpp"

int main()
	{
		//create object statically
		Student s1;
		Student s2;
		
		Student s3,s4,s5;
		s1.age=24;
		s1.rollnumber=101;
		cout<<s1.age<<endl;
		cout<<s2.rollnumber<<endl;
		
		s2.age=10;
	
		//create object dynamically
		Student*s6 =new Student;
		
		//we can also write as
		s6->age=24;
		s6->rollnumber=104;
		
	}
