//initialisation list
class student{
	public:
		int age;
		int const rollnumber;//ek bar jo value de de change nahi hoge
		int &x;//refrence variable also has to initilise at the time of creation	
			//method to initilised const rollnumber so all object has different value of rollenumber
			
			student(int r,int age) :rollnumber(r),age(age),x(this->age) //initilistion list used to initilise constant variable ie cons int rollnumber =r;//we can also initilise non constant data member
			{
				//rollnumber=r;//not allowed;
				
				}	
};
