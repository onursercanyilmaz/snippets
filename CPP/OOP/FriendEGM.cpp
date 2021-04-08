#include<iostream>

using namespace std;

//class MIT;

class EGM{
	string aranan1;
	string aranan2;
	
	
	 public:
	 	
	 	EGM(string aranan1, string aranan2):aranan1(aranan1), aranan2(aranan2){
	 		
		 }
		friend class MIT;
	
};


class MIT{
	public:
		
		
		void arananBilgisi(EGM ajn){
			cout<<ajn.aranan1<<endl;
			cout<<ajn.aranan2<<endl;
		}
};






int main(){
	
EGM arn("Ali Can - Kirmizi Kategori", "Veli Bas - Gri Kategori");
MIT ajn;

ajn.arananBilgisi(arn);

	
}
