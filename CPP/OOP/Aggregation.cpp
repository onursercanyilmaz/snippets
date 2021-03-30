#include<iostream>

using namespace std;

 class Ucak{
 	
 	int model;
 	string motor;
 	
	 public:
	 	 Ucak(int model, string motor):model(model),motor(motor){
	 	cout<<"Ucak yapiliyor..."<<endl;
	 }
	 ~Ucak(){
	 	cout<<"Ucak Yikiliyor..."<<endl;
	 }
	 
	 void bilgiGoster()
		{
			cout <<"Ucak modeli  	 : F-"<<model<<endl;
			cout<< "Ucak motoru   	 : "<<motor<<endl;
		 	
		}	
	
 };
 
 class Harbay{
 
 	private:
 //	Ucak *iUcak;
 	public:
 		Harbay(Ucak *ucak)
		{
		 //this->iUcak = ucak;
 			cout<<"Harbay yapiliyor..."<<endl;
		}
		 
		 ~Harbay()
		 {
		 	cout<<"Harbay yikiliyor..."<<endl;
		 }
 		
 };
 
 
 int main()
 {
 	Ucak ucak(16,"Jet Motoru");
 	Harbay *pilot = new Harbay(&ucak);
 	delete pilot;
 	ucak.bilgiGoster();
 	cout<<"Program bitti..."<<endl;
 	
 }
