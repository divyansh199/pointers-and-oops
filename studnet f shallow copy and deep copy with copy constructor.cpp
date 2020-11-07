#include<bits/stdc++.h>
using namespace std;
#include "student c.cpp"
int main()
	{
		char name[]="abcd";
		student s1(20,name);
		s1.display();
		
		student s2(s1);
		
		s2.name[0]='x';
		s2.display();
		s1.display(); 
		
	}
	/*	name[3]='e';
		student s2(24,name);
		s2.display();
	
		
		s1.display(); //s1 will also change because we passing address of 0th index of array in function//
	}
	
	*/
