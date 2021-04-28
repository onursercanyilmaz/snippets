#include<iostream>

using namespace std;

int main()
{
	string ogr = "Onur Sercan";
	double ogrDogum = 1999;
	int *yeniKayit;
	void *yedekKayit;
	
	yeniKayit = (int *)&ogr;
	
	
	cout<<"Ogrenci Adi ve Soyadi	 							: "<<ogr<<endl
		<<"Ogrencinin Kimlik Bilgisinin Sistemdeki Adresi					: "<<&ogr<<endl
		<<"Sistemdeki Yeni Kayit Adresi							: "<<yeniKayit<<endl
		<<"Sistemdeki Yeni Kayit Adresi ici	(int)					: "<<*yeniKayit<<endl
		<<"Sistemdeki Yeni Kayit Adresi ici	(str)					: "<<*(string *)yeniKayit<<endl;
		
		
		
		yeniKayit = (int *)&ogrDogum;
		cout<<endl<<endl;
		cout<<"Ogrenci Adi ve Soyadi	 							: "<<ogrDogum<<endl
		<<"Ogrencinin Kimlik Bilgisinin Sistemdeki Adresi					: "<<&ogrDogum<<endl
		<<"Sistemdeki Yeni Kayit Adresi							: "<<yeniKayit<<endl
		<<"Sistemdeki Yeni Kayit Adresi ici	(int)					: "<<*yeniKayit<<endl
		<<"Sistemdeki Yeni Kayit Adresi ici	(str)					: "<<*(double *)yeniKayit<<endl;
}
