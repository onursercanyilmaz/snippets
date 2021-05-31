#include<iostream>

using namespace std;

int ozelArama(char adSoyad[], int n, char istenen[]){
	
	for(int i=0;i<n; i++)
	{
		if(i%2==0)
			continue;
		else
		{
			cout<<i<<". indise bakildi."<<endl;	
		if (adSoyad[i]==istenen[0])
			return i;
		}
	
	}
	cout<<endl;
	for(int i=0;i<n; i++)
	{
		if(i%2==0)
		{
		cout<<i<<". indise bakildi."<<endl;	
		if (adSoyad[i] == istenen[0])
			return i; 
		
			
		}	
	}
	
}



int main()
{
	char harf[]="";
	char adSoyad[] = {"OnurSercanYilmaz"};
	cout<<adSoyad[0];
	cout<<"Lutfen bir harf giriniz: "<<endl;
	cin>>harf;
	int size = sizeof(adSoyad) / sizeof(adSoyad[1]);
	
	cout<<"Aranan Harf "<<harf[0]<<", adSoyad dizisinin "<<ozelArama(adSoyad, size, harf)<<". indisinde bulundu."<<endl;
	
	
}

