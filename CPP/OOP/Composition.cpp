#include<iostream>

using namespace std;

 class Motor{
 
 	public:
 		Motor()
		 {
 			cout<<"Motor yapiliyor..."<<endl;
		 }
			 
		 ~Motor()
		 {
		 	cout<<"Motor yikiliyor..."<<endl;
		 }
 		
 };
 
 class Ucak{
 	Motor m;
 	string model;
 	string motor;
 	
	 public:
	 	 Ucak()
	 	 {
		  
	 	cout<<"Ucak yapiliyor..."<<endl;
	 }
	 ~Ucak(){
	 	cout<<"Ucak Yikiliyor..."<<endl;
	 }
	
 };
 


 
 
 
 
 int main()
 {
 
 	
 	Ucak *ucak = new Ucak();
 	delete ucak;
 
 
 	
 }
