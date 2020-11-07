//double pointer

#include<iostream>
using namespace std;

void increment1(int **p)
{
	p=p+1;
}
void increment2(int **p)
	{
		*p=*p+1;
		cout<<*p;	
	}
	
	void increment3(int **p)
	{
		**p=**p+1;
		cout<<**p;
	}
int main()
	{
		int i=10;
		int *p =&i;
		int **p2=&p;
		cout<<p2<<endl;
		cout<<&p<<endl;
		
		cout<<i<<endl<<*p<<endl<<**p2;
		increment2(p2);
		cout<<endl;
		increment3(p2);
		
	}
