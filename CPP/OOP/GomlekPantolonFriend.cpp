#include<iostream>

using namespace std;

void bedenBilgisi()
{
	
}

class Gomlek{
	string beden;
	
	 public:
	 	Gomlek(string beden):beden(beden){
	 		
		 }
		 
	 	friend void bedenBilgisi(Gomlek g1){
	 		cout<<g1.beden<<endl;
		 }
		
};

class Pantolon{
	int W,L;
	
	 public:
	 	Pantolon(int w, int l):W(w),L(l){
	 		
		 }
	 	friend void bedenBilgisi(Pantolon p1){
	 		cout<<p1.W<<endl;
	 		cout<<p1.L<<endl;
		 }
};



int main(){
	
	Gomlek g1("Medium");
	Pantolon p1(36,32);
	
	bedenBilgisi(g1);
	bedenBilgisi(p1);
	
	
	
	
}
