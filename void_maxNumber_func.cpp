#include<iostream>

using namespace std;


void max();

int main()
{
	
	max();
	
	
	return 0;
}



void max()
{
	
	int a,b,max;
	cin>>a>>b;
	
	max = a;
	
	if(b>a)
	{
	max = b;
	}
	
	cout<<"Max number: "<<max<<endl;
}
