//shallow and deep copy with copy constructor
class student{
	
	int age;
	char *name;
	
	public:
		student (int age,char *name)
		{ 
			this->age=age;
			
			//we performed shallow copy here
		//	this->name=name;
		
		//deep copy
		
		this->name=new char[strlen(name)+1];
		//1 is here for null char;
		
		strcpy(this->name,name);
		}
		
		//copy constructor
		
		student(student const &s)//we can restrict some changes s.name=ddasf;
		{
			this->age=s.age;
			//this->name=s.name;//shallow copy performed by internally created copy constructor
			
			//here we performed deep copy
			this->name=new char[strlen(s.name)+1];
			strcpy(this->name,s.name);
		}
		void display()
			{
				cout<<name<<" "<<age<<endl;
			}
};
