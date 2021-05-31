#include<iostream>

using namespace std;

int sayac=0;
int TernSear(int dizi[], int sol, int sag, int hedef){
	if (sag > sol)
	{
int l = sol + (sag - sol)/3;
int r = sag - (sag - sol)/3;

if (dizi[l] == hedef)
	return l;
if (dizi[r] == hedef)
	return r;

if (hedef < dizi[l])
{
	TernSear( dizi,  sol,  l-1,  hedef);
}
if (hedef > dizi[r])
{
	TernSear( dizi,  r+1,  sag,  hedef);
}
else
	TernSear( dizi,  l+1,  r-1,  hedef);

	}

	
}



int main()
{
	int sayi;
	int fibo[]= {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377};
	cout<<"Lutfen bir sayi giriniz: "<<endl;
	cin>>sayi;
	int size = sizeof(fibo) / sizeof(fibo[1]);
	
	cout<<"Aranan Sayi "<<sayi<<", Fibonacci dizisinin "<<TernSear(fibo,0,size, sayi)<<". indisinde bulundu."<<endl;
	
	
}

