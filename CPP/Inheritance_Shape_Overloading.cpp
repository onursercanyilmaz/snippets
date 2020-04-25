#include <iostream>

using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape is created." << endl;
    }

    Shape(int a)
    {
        cout << "Overloaded Shape is created." << endl;
    }
};

class Rectangle : public Shape
{
    public:
    
        Rectangle()
        {
            cout << "Rectangle is created." << endl;
        }
        Rectangle(int a) : Shape(a)
        {
            cout << "Overloaded Rectangle is created." << endl;
        }
};

class Triangle : public Shape
{
    public:

       Triangle()
       {
          cout << "Triangle is created." << endl;    
       }
       Triangle(int a) : Shape(a)
       {
           cout << "Overloaded Triangle is created." << endl;
       }
};


int main()
{
    
    Rectangle rec1; 
    Triangle tr1;
    cout << endl;
    Rectangle rec2(10);
    Triangle tr2(10);
    
  
}




