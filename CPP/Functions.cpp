#include<iostream>

using namespace std;

void write();
void read(string name);

int sum(int a,int b);

int main()
{
	/*
	method
	without output   without output
	without input       with input      
	
		
	function: if it sends a value to the main function it is a function. if it doesnt send values to the main function it is method.
	with output        with output
	without input      with input
	
	void function sends nothing. void is method. 
	*/
	
	string str;
	cin>>str;
	
	write();
	
	read(str);
	
	int number=sum();
	cout<<"Addition: "<<number<<endl;


	
	return 0;
}

	//without output and without input
	void write()
	{
		
		cout<<"Hello World"<<endl;
		//no return command
	}
	
	
		//without output and with input
	void read(string name)
	{
		
		cout<<"Hello "<<name<<endl;
		//no return command
	}
	
		
		//with  output and without input
	int sum(int a,int b)
	{
		cin>>a>>b>>endl;
	
		return a+b;
	}
	
	
