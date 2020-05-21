#include<iostream>

using namespace std;

class Shape
{
	protected:
		double area, perimeter;
		
	public:
		virtual void shapeName() = 0;
		virtual void shapeArea () = 0;
		virtual void shapePerimeter() = 0;
		
		double getArea()
		{
			return area;
		}
		
		double getPerimeter()
		{
			return perimeter;
		}
};

class Rectangle: public Shape
{
	double height, width;
	public:
		Rectangle(double height, double width): height(height), width(width) {}
		
		void shapeName()
		{cout<<"Rectangle"<<endl;}
		void shapeArea()
		{area = height * width;}
		void shapePerimeter()
		{perimeter = 2*(height + width); }		
		
		
};

class Circle : public Shape
{
	double r;
	public:
		Circle(double r) : r(r) {}
		
		void shapeName()
		{cout<<"Circle"<<endl;}
		void shapeArea()
		{area = r*r*3,14;}
		void shapePerimeter()
		{perimeter = 2*3,14*r; }
	
};

class Square : public Rectangle
{
	public:
		Square(double x) : Rectangle (x,x){}
		
		void shapeName()
		{cout<<"Square"<<endl;}
		
};


int main()
{
	Shape *array[3];
	array[0] = new Rectangle(10,5); //first object is a Shape
	array[1] = new Circle(2); //second object is a Shape
	array[2] = new Square(5); //third object is a Shape

for(int i=0; i<3; i++)
	{
		array[i]->shapeName();
		array[i]->shapeArea();
		array[i]->shapePerimeter();
		cout<< "Area is: "<<array[i]->getArea() << endl << "Perimeter is: "<<array[i]->getPerimeter() <<endl;
	
	} 

}

