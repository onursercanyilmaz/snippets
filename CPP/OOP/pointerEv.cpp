#include<iostream>

using namespace std;

int main()
{
	int bora, altay=0, esin=20000, ceren=5000;
	int *ev1, *ev2, *ev3, *ev4;
	ev1 = &bora;
	ev2= &altay;
	ev3= &esin;
	ev4= &ceren;
	
	bora = esin/2;
	esin /=2;
	bora += ceren;
	ceren-= ceren;
	ceren+=1000;
	
	 
	
	cout<<"Evlerdeki para durumu	:"<<endl
		<<"1.ev		: "<<*ev1<<endl
		<<"2.ev		: "<<*ev2<<endl
		<<"3.ev		: "<<*ev3<<endl
		<<"4.ev		: "<<*ev4<<endl;
}
