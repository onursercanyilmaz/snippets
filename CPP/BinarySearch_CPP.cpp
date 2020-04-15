#include <iostream>

using namespace std;


int BinarySearch(int array[], int number, int start, int end)
{
	//Binary Search Algorithm usable for just sorted arrays.
	// If your array is not sorted, you have to sort it before using Binary Search.
	
	if(end >= start)
	{
		int middle = (start + end)/2;
		
		if(array[middle] == number)
			return middle;
	
		else if(array[middle] > number) // if middle number is higher than number that i want to find, it looks before the middle 
			return BinarySearch(array, number, start , middle-1);
	
		else // if middle number is lower than number that i want to find, it looks after the middle
			return BinarySearch(array, number,  middle+1, end);
	}
return -1;
}

int main()
{ 

	int n;
	cout<<"Please enter a positive number: ";
	cin>>n;
	
	
	int array[10]={5,18,22,26,29,35,56,87,99,102};
	int search = BinarySearch(array, n, 0, 9);
	if(search == -1)
		cout<<"Binary Search : Out of The Array "<<endl;
	else
		cout<<"Binary Search : Number is at "<<search<<". index"<<endl;

return 0;
}

/*
bool BinarySearch(int array[], int number, int start, int end)
{
	
	int middle = (start + end)/2;
	
	if(array[middle] == number )
		return true;
	
	else if(end-start == 1) 
		return false;
	
	else
	{
		if (array[middle] > number)
			return BinarySearch(array, number, start, middle);
			
		else
			return BinarySearch(array, number, middle, end);
	}
}

int main()
{ 

	int n;
	cout<<"Please enter a positive number: ";
	cin>>n;
	int array[10]={5,18,22,26,29,35,56,87,99,102};
	
	if(BinarySearch(array, n, 0, 9))
		cout<<"Binary Search : In The Array"<<endl;
	else
		cout<<"Binary Search : Out of The Array"<<endl;
		
		return 0;
}
		*/
