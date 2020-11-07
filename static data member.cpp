//how to use static data mamber and function

class student{
	public:
		
	int rollnumber;
	int age;
	
	static int totalstudents;//ye class ki propety ban jayega//total number of students present
//ab jab bhi object creat krege to totalstudent ki property object k dm mai creat nahi hoge ,only non static ki copy banegi

//how to access static datamamber

//class name ,scope resolution opertator,DM;
	
	
};

//how to initilize static data member;
int student :: totalstudents=0;
