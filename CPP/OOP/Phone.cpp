#include<iostream>
#include <string>
using namespace std;


class Telefon
{
    private:
    string marka,model;
    int fiyat, kamera;

    public:

    void aramaTesti();
    void kameraTesti();
    void bilgiGoster();

     Telefon(string marka, string model, int fiyat, int kamera){
        this->marka = marka;
        this->model = model;   
        this->fiyat = fiyat;
        this->kamera = kamera;
    }
};

void Telefon::bilgiGoster()
{
    cout<<"Marka: "<<marka<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Fiyat: "<<fiyat<<"TL"<<endl;
    cout<<"Model: "<<kamera << "MP"<<endl;
}

void Telefon::aramaTesti()
{
cout<<"\nArama testi basarili\nTesti Gecti\n"<<endl;
}

void Telefon::kameraTesti()
{
    cout<<"Kamera testi basarili\nTesti Gecti\n---------------------------"<<endl;
}
int main()
{

    Telefon phone1("Apple", "X", 3000,16);
    phone1.bilgiGoster();
    phone1.aramaTesti();
    phone1.kameraTesti();

    Telefon phone2("Samsung", "Alpha", 6000,12);
    phone2.bilgiGoster();
    phone2.aramaTesti();
    phone2.kameraTesti();

    Telefon phone3("Xiaomi", "Mi", 1500,22);
    phone3.bilgiGoster();
    phone3.aramaTesti();
    phone3.kameraTesti();
  





}
