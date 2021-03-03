#include<iostream>
#include <string>
using namespace std;

class Car
{
    private:
    string name,color;
    int price;
    public:
        void gas();
        void brake();
        //get set for attributes
        void setName(string name){this->name = name;}
        void setColor(string color){this->color = color;}
        void setPrice(int price){
            if(price < 0) cout<<"Price can not negative!"<<endl;
            this->price = price;}

        string getName(){return name;}
        string getColor(){return color;}
        int getPrice(){return price;}

        void bilgiGoster();
        void bilgiEkle(Car car);
};

void Car::gas()
{
cout<<"Car speed is increasing!"<<endl;
}
void Car::brake()
{
cout<<"Car speed is decreasing!"<<endl;
}

void Car::bilgiGoster()
{
    cout <<"Car : "<<getName()<<endl;
    cout <<"Car Color : "<<getColor()<<endl;
    cout <<"Car Price : "<<getPrice()<<endl;
}
void Car::bilgiEkle()
{
    
    setName("BMW");
    setColor("Black");
    setPrice(600000);

}

int main()
{

    Car car;
    car.setName("BMW");
    car.setColor("Black");
    car.setPrice(600000);

/*  cout <<"Car : "<<car.getName()<<endl;
    cout <<"Car Color : "<<car.getColor()<<endl;
    cout <<"Car Price : "<<car.getPrice()<<endl;
*/
    car.bilgiGoster();
    car.bilgiEkle(car);


    car.gas();
    car.brake();
    

}
