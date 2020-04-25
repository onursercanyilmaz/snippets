
#include <iostream>

using namespace std;

class Human
{
public:
    void eat() {cout << "I want to eat SOMETHING" << endl; }
    void eat(string msg) { cout << " " << msg << endl; }
};

class Student :public Human
{
public:
    void eat() { cout << "I want to eat MEAT" << endl; }
    void eat(string msg) { cout << " " << msg << endl; }
};

class Employee : public Human
{
public:
    void eat() { cout << "I want to eat FISH" << endl; }
  //  void eat(string msg){ cout << " " << msg << endl; }
};
int main()
{
    Student std;
    Employee emp;

    std.Human::eat(); //I want to eat SOMETHING
    std.eat(); //I want to eat MEAT
    std.eat("I changed my mind and want to eat CHICKEN"); //I changed my mind and want to eat CHICKEN

    cout << endl;

    emp.Human::eat(); //I want to eat SOMETHING
    emp.eat();  //"I want to eat FISH"
   // emp.eat("I would like to eat FISH and drink WINE"); //I would like to eat FISH and drink WINE
    emp.Human::eat("I would like to eat FISH and drink WINE"); //Or we can use from Parent class without writing the code which is before 1 line in child class 
  
}

