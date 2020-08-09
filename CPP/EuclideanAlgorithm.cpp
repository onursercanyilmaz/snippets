//Finding Greatest Common Divisor by euclide algorithm

#include<iostream>

using namespace std;

int euclide(int a, int b)
{
	int r = 0;

	if (a == 0)
	{
		return b;
	}
	else if (b == 0)
	{
		return a;
	}
	else
	{
		r = (a % b);
		return euclide(b, r);
	}
}

int main()
{

	cout << euclide(62, 45) << endl;

}