//shallow and deep copy
class student{
	
	int age;

	
	public:
		
			char *name;
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
		
		void display()
			{
				cout<<name<<" "<<age<<endl;
			}
};
