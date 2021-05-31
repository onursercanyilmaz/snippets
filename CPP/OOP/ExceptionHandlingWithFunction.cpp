#include<iostream>

using namespace std;

int hataliFonk()
{
	return 5000;
}


int main()
{
	int hata = hataliFonk();
	try{
		
		try{
			if(hata != 0)
			cout<<"Hata no: "<<hata<<endl;	throw hata;
		}
		
		catch(int icHata)
		{
			cout<<"ic hatalar 0-1000 arasindadir."<<endl;
			if(icHata>0 && icHata<1000)
				cout<<"Ic hata algilandi."<<endl;
			else
				throw icHata;
		}
		
		
	}
	
	catch(int disHata)
	{
		cout<<"Dis hata algilandi."<<endl;
	}
}

