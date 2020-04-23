#include <iostream>

using namespace std;

int main()
{
/* Collatz Conjucture : 
	if entered number is even divides by 2 continuously until number equals 1
	if entered number is odd it multiplied by 3 and sum with 1 after that same process works */  
	int number;
	cout<<"Pleas enter a number: ";
	cin>>number;
	cout <<number<<" ";
	
	loop:
		if(number%2 == 0) // if number is even
			number = number / 2;
			
		else  // if number is odd
			number = number * 3 +1;
		
		cout <<number<<" ";
		
		if (number != 1) // it continues until number is 1
			goto loop; //turns to the loop:
			
return 0;
			

}
