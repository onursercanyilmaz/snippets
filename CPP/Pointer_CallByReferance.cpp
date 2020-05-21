/*
//With using Call By Value
#include<iostream>

using namespace std;

void changeNumber(int num)
{
	num = 10;
	cout<<"Number value in the function: "<<num<<endl;	
}

int main()
{
int number = 20;
cout<<"Number value: "<<number<<endl;

changeNumber(number); //it makes 20 to 10

// After function number value comes back to old value.
cout<<"Number value end of the function: "<<number<<endl;

return 0;
OUTPUT:
20
10
20
//Actually, number value doesn't change. Num value changes and shows that on the screen.
//Because of that when we want to write number value again, it writes 20 not 10.
}

*/

//---------------------------------------------------------------------------------------------------

//With using Call By Referance
#include<iostream>

using namespace std;

void changeNumber(int *num)
{
	*num = 10;
	cout<<"Number value in the function: "<<*num<<endl;	
}

int main()
{
int number = 20;
cout<<"Number value: "<<number<<endl;

changeNumber(&number); //it makes 20 to 10

// After function number value changes because we gave the address of the value and changed on there.
cout<<"Number value end of the function: "<<number<<endl;

return 0;

//OUTPUT:
//20
//10
//10
}





