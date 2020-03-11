#include<iostream>

using namespace std;

int main()
{
	
	string a,b;
	cin>>a;
	int n = a.length();
	b=a;
	
	for(int i=0 ;i<n;i++)
	{
		b[i]=a[n-i-1];
		
		
	}
	
	cout<<b<<endl;
	cout<<b[2];
	return 0;
}
