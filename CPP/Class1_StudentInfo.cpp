#include<iostream>

using namespace std;

class Student 
{
	
private:
	int studentNo;
	string name;
	string surname;
	
public:
	void setValue(int studentNo, string name, string surname)
	{
		this->studentNo = studentNo;
		this->name = name;
		this->surname = surname;
	
	}
	void getValue() //it is inside of the class so we dont need to define anything inside like (xxx).
	{
		cout<<"Student Name: "<<name<<endl;
		cout<<"Student Surname: "<<surname<<endl;
		cout<<"Student Number: "<<studentNo<<endl;
	}
};


int main()
{

	Student std1;
	
	std1.setValue(555,"Onur","Yilmaz");
	std1.getValue();
	
	return 0;

}
