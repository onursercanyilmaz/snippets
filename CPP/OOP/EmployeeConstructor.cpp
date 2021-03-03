#include<iostream>
#include <string>
using namespace std;


class Calisan
{
    private:
    string ad,unvan;
    int maas;

    public:

    void bilgiGoster();

    Calisan(){
        this->ad = "Bos";
        this->unvan = "Bos";
        this->maas = 0; 
        
    }
     Calisan(string ad, string unvan){
        this->ad = ad;
        this->unvan = unvan;
        this->maas = -1; 
        
    }
     Calisan(string ad, string unvan, int maas){
        this->ad = ad;
        this->unvan = unvan;   
        this->maas = maas;
    }
};

void Calisan::bilgiGoster()
{
    cout<<"Ad: "<<ad<<endl;
    cout<<"Unvan: "<<unvan<<endl;
    cout<<"Maas: "<<maas<<endl;
}
int main()
{

    Calisan emp1;
    Calisan emp2("Onur", "Ogrenci");
    Calisan emp3("Onur", "Ogrenci", 3000);
   // cout <<"Student: "<<std.getAdSoyad()<<endl;
    //cout <<"Student: "<<std.getSinif()<<endl;

emp3.bilgiGoster();
emp2.bilgiGoster();
emp1.bilgiGoster();



}
