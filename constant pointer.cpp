//constant varible in pointer

#include<iostream>
using namespace std;

void q(int const & a)
{ 
	a++;
}

void f(const int*p)
{
	(*p)++;
	
}

int main()
	{
		int const i  =10;
		int const *p=&i;
		
		int j=12;
		int*p3=&j;
		f(p3);
		q(j);
		int const *p2 =&j;//you cant can't change via p2 but change frm j
		j++;
		cout<<*p2<<endl;
		
	}
