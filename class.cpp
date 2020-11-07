 class Student{
	public:
	int rollnumber;
	
	private:
	int age;
	
	public:
		//default constructor
/*	Student()
		{
			cout<<"constructor call"<<endl;
		}
*/		
		Student(int rollnumber)//paramatrised costructor
		{
			cout<<"constructor 2 called"<<endl;
			rollnumber =rollnumber;
		}
		
		Student(int a,int r)
		//is constructor k this pointer k pas object ka address aayega
		{	cout<<"this :"<<this<<endl;
			cout<<"constructor 3 is called"<<endl;
			age=a;
			rollnumber=r;
		}
		void display()
		{
			cout<<age<<" "<<rollnumber<<endl;
		}
		
		int getAge()//getter
		{
			return age;
			
		}
		
		void setAge(int a)//setter
		{
			age=a;
			
		}
		
};
