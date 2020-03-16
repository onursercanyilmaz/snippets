#include<iostream>
#include<string>
using namespace std;



void manipulate(string name);


int main()
{
	string name; 
	cout<<"Please enter your name: ";
	cin>>name; //I got the name from user.
	
	
	manipulate(name); //I used the function for "name".
}


void manipulate(string name)
{

	int i;
	string star="***";
	int len = name.length(); //we got the lenght of "name" which is entered by user.
	
	cout<<"Lenght of name: "<<len<<endl; 
	
	/* ALTERNATIVE WAY 
	for(i=0;i<len/2;i++)
	{	
		
		cout<<name[i];
	}
	
	cout<<star;
	
	for(;i<=len;i++)
	{	
		
		cout<<name[i];
	}
	*/
	
	for(i=0;i<len;i++) 
	{	
		for(;i<len/2;i++) // half of name is written.
		{	
		
			cout<<name[i];
		} 
		
		if(i==len/2) // we add ***, if "i" equals half of length of name. (it will not write again because "i" can not be equal the same value again.)
		{
			cout<<star;
		}
		
		cout<<name[i]; //I used "i" for both for loops because I wanted to write the other half of name. Same "i" keeps going increasing. 
	}
	
	
	
	
}
