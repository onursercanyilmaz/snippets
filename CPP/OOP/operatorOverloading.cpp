#include<iostream>

using namespace std;



class A{
	
	int x;

	
	public:
	void setX(int x){ this->x=x;}
	int getX(){return x;}
		
		A operator + (A a){
			A aa;
			aa.x = x - a.x;
			return aa;
		}
	
};




int main(){

A A1,A2;
A1.setX(5);
A2.setX(3);

A Sonuc = A1.operator+(A2);

cout<<"A1	= "<<A1.getX()<<endl;
cout<<"A2	= "<<A2.getX()<<endl;
cout<<"A1 + A2	= "<<Sonuc.getX()<<endl;

return  0;

	
}
