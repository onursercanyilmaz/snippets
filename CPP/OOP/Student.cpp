#include<iostream>
#include <string>
using namespace std;


class Student
{
    private:
    string isim;
    string sinif;

    public:
    void setAdSoyad(string ad){ad = isim;}
    void setSinif(string sin){sin = sinif;}

    string getAdSoyad(){return isim;}
    string getSinif(){return sinif;}

    void bilgiGoster();

    Student(string isim, string sinif){
        this->isim = isim;
        this->sinif = sinif;
        
    }
};

void Student::bilgiGoster()
{
    cout<<"Name: "<<isim<<endl;
    cout<<"Sinif: "<<sinif<<endl;
}
int main()
{

    Student std("Onur", "4");
   // cout <<"Student: "<<std.getAdSoyad()<<endl;
    //cout <<"Student: "<<std.getSinif()<<endl;

std.bilgiGoster();

}
