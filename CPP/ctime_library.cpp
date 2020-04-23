#include<iostream>
#include<ctime>


using namespace std;
int main()
{

	int x = 2;
	
	clock_t start = clock(); //Start of code
	for (int i =0; i<1000000000; i++)
	{
		x = 2;
	}
	
	clock_t end = clock(); // End of code
	cout<<(float) (end-start) / CLOCKS_PER_SEC << endl; //Changes the clock to seconds
	
	return 0;
}
