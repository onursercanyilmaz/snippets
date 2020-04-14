#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if (n>2)
		return fibonacci(n-1)+fibonacci(n-2);
	
	else if(n<=0)
		return 0;
	 
	else
		return 1;	
}

int factorial(int n)
{
	if(n == 1)
		return 1;
		
	else
		return n * factorial(n-1);
	
}

int tilladd(int n)
{

	if(n == 1)
		return 1;
		
	else
		return n + tilladd(n-1);


}
int main()
{ 

	int n;
	cout<<"Please enter a positive number: ";
	cin>>n;

	cout<<n<<".Fibonacci Number is: "<<fibonacci(n)<<endl;
	cout<<n<<"! is: "<<factorial(n)<<endl;
	cout<<"Addition of 0 to "<<n<<" is: "<<tilladd(n)<<endl;

return 0;
}
