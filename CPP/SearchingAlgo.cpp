#include<iostream>

using namespace std;


void linearSearch(int wanted)
{
	int i, arr[100];
	for(i = 0; i<100; i++)
	{
		arr[i] = i;
	}
	
	for (i =0; i<=wanted; i++)
	{
		if(wanted == arr[i])
		cout<<"Wanted number at "<<i<<". index"<<endl;
		
	}
}


int binarySearch(int arr[], int wanted, int start, int end)
{
	if(end >= start)
	{
		
		int mid = (start+end)/2;
		
		if(arr[mid] == wanted) return mid;
		else if (arr[mid] > wanted) return binarySearch(arr,wanted,start,mid-1);
		else
		return binarySearch(arr,wanted,mid+1,end);
	}
	
	return -1;
}

int main ()
{
	
	int i, arr[100];
	for(i = 0; i<100; i++)
	{
		arr[i] = i;
}
int number = binarySearch( arr, 26,0,100);
cout<<number<<endl;
	linearSearch(50);
}
