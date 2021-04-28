#include<iostream>

using namespace std;

int main()
{
	int onur, sercan, yilmaz;
	int *ptr1=&onur, *ptr2=&sercan, *ptr3=&yilmaz;
	
	
		cout<<"Gecici adres degerleri"<<endl
		<<ptr1<<endl
		<<ptr2<<endl
		<<ptr3<<endl<<endl<<endl;
		
	ptr1 +=5;
	ptr2+=10;
	ptr3+=15;
	
		cout<<"Kalici adres degerleri"<<endl
		<<ptr1<<endl
		<<ptr2<<endl
		<<ptr3<<endl<<endl<<endl;
		
	string asi_listesi[] = {"Yigit","Can","Sevin"};
	int asi_durumu[] = {0,1,2};
	
	string *ptr4 = asi_listesi;
	int *ptr5 = asi_durumu;
	
	for(int i = 0; i< 3; i++)
	{
		cout<<i+1<<". "<<ptr4[i]<<" -> "<<ptr5[i]<<".doz"<<endl;
	}
	
	
	
	
}
