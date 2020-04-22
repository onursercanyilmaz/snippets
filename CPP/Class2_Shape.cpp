#include<iostream>
#include<math.h>
#define PI 3.14

using namespace std;

class Shape 
{
	
private:
	float side1;
	float side2;
	string shape;
	
public:
	
	Shape() //Gives default parameters if setValue() don't work.
	{
		side1 = 1;
		side2 = 1;
		shape = "Rectangle";
	}
	
	Shape(int side1, int side2, string shape) //Com1: Name of Shape() is same: "Overloading" : Program decides which one will be using. 
	{										// Com2: Works while the object has not created yet, while it is still in process of creating.
		this->side1 = side1;				// Com3: Shape shp1, shp2(6,2,"R"); 
		this->side2 = side2;				//Com4: If we dont give parameters to shp1 it will use default parameters.	
		this->shape = shape;				//Com: and shp2 is an example for 2nd comment line
	}
	
	void setValue(float side1, float side2, string shape)
	{	//this-> is a pointer and side1, side2 and shape variables are the same name. So "this" specify the which one is.
		this->side1 = side1;  
		this->side2 = side2;
		this->shape = shape;	
	}
	void area() //it is inside of the class so we dont need to define anything inside like (xxx).
	{
		float h = sqrt((side2 * side2)-(side1/2 * side1/2)); //it is high of triangle
			
		if (shape == "Circle"||shape =="C"||shape =="circle")
		{
			side1 = PI;
			cout<<"Area of Circle: "<<side1*side2*side2<<endl;
		}
	
		else if(shape == "Triangle"||shape =="T"||shape =="triangle")
			cout<<"Area of Triangle: "<<(h*side1)/2<<endl;
		
		else if (shape == "Rectangle"||shape =="R"||shape =="rectangle"||shape =="squre"||shape =="Squre"||shape =="S")
			cout<<"Area of Rectangle: "<<side1*side2<<endl;
		
	}
	void perimeter() //it is inside of the class so we dont need to define anything inside like (xxx).
	{
		
		if (shape == "Circle"||shape =="C"||shape =="circle")
		{
			side1 = PI; //Changes side1 parameter to PI which is we need to.
			cout<<"Perimeter of Circle: "<<2*side1*side2<<endl;
		}
		
		else if(shape == "Triangle"||shape =="T"||shape =="triangle")
			cout<<"Perimeter of Triangle: "<<side1+side2+side2<<endl;
		
		else if (shape == "Rectangle"||shape =="R"||shape =="rectangle"||shape =="squre"||shape =="Squre"||shape =="S")
			cout<<"Perimeter of Rectangle: "<<2*side1+2*side2<<endl;		
	}	
};
/* THATS THE ANOTHER WAY FOR DEFINE SHAPE() OUT OF THE CLASS!
Shape::Shape(int side1, int side2, string shape)  
	{										
		this->side1 = side1;				
		this->side2 = side2;				
		this->shape = shape;			
	}
	*/
int main()
{

	Shape shp1;
	
	shp1.setValue(6,6,"C");
	shp1.area();
	shp1.perimeter();
	
	return 0;

}
