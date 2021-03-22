#include <string>
#include <iostream>

using namespace std;

class IzuTel{

public:
	string fiyat(){
	return "5000 tl";
}

};

class IzuTel_AB : public IzuTel{
   public:
   		string fiyat(){
		return "1000 euro";
}
   

};

class IzuTel_KKTC : public IzuTel{
   
};




int main() {

   IzuTel p1;
   IzuTel_KKTC p2;
   IzuTel_AB p3;
   
   cout
   <<"IzuTel        : "<<p1.fiyat()<<endl
   <<"IzuTel_KKTC   : "<<p2.fiyat()<<endl
   <<"IzuTel_AB     : "<<p3.fiyat()<<endl
    <<"IzuTel_AB     : "<<p3.IzuTel::fiyat()<<endl;
   
   
    

   
}
