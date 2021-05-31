#include<iostream>

using namespace std;

int linear(int istenen, int n, int PIs[]){
	
	for(int i=0;i<n; i++)
	
	{
		if (PIs[i] == istenen)
			return i; 
		
		
	}
	
}

int linear(int *istenen, int n, int PIs[]){
	
	for(int i=0;i<n; i++)
	
	{
		if (PIs[i] == *istenen)
			return i; 
		
		
	}
	
}

int main()
{
	int ugurlu;
	int PIs[] = {3,4,1,5,9,2,6,5,3,5,8,9,7,9};
	cout<<"Ugurlu sayinizi giriniz: "<<endl;
	cin>>ugurlu;
	int size = sizeof(PIs) / sizeof(PIs[1]);
	
	cout<<"Ugurlu numaran "<<ugurlu<<", pi dizisinin "<<linear(ugurlu,size, PIs)<<endl;
	cout<<"Ugurlu numaran "<<ugurlu<<", pi dizisinin "<<linear(&ugurlu,size, PIs)<<endl;
	
}

