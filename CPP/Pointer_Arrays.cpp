//Arrays are pointers
#include<iostream>


using namespace std;

int main()

{
	
	string stringArray[]= {"Onur", "Sercan", "Yýlmaz"};


	string *strptr = stringArray;
	
	cout<<strptr<<endl; //Shows address of stringArray's first value that is Onur
	
	cout<<*strptr<<endl; //Shows 'Onur'
	cout<<*(strptr+1)<<endl;//Shows 'Sercan'
	
	cout<<strptr[0]<<endl; //Shows 'Onur'
	cout<<strptr[1]<<endl; //Shows 'Sercan'
	
	cout<<stringArray[0]<<endl;//Shows 'Onur'
	cout<<stringArray[1]<<endl;//Shows 'Sercan'

}

