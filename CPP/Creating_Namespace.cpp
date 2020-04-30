#include<iostream>

using namespace std;

/*a namespace is simply an abstract way of grouping items together. 
A namespace cannot be created as an object; think of it more as a naming convention. 
It is used as additional information to differentiate similar functions, 
classes, variables etc. with the same name available in different libraries.*/

namespace showInfo
{
	string birthday = "11/01/1900";
	double time = 12.12;
	void birthday_info()
	{
		cout << "Birthday is: " << birthday << endl;
	}
	void time_info()
	{	
		cout << "Time is: " << time << endl;
	}
}

int number2 = 22; //global value

int main() 
{
	int number1 = 16; //local value
	
	cout << "Local Value: " << number1 << endl;
	cout << "Global Value: " << number2<<endl;

	cout << "Birthday: " << showInfo::birthday << endl; //we can acces the values which declared inside of namespace.
	cout << "Time: " << showInfo::time << endl;

	showInfo::birthday_info(); //we can acces the functions/methods which declared inside of namespace.
	showInfo::time_info();

}