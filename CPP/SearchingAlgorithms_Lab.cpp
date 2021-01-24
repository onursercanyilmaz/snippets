#include<iostream>

using namespace std;

int stepL = 0;
int stepB = 0;
int stepT = 0; 

int LinearSearch(int arr[], int n, int x)
{
	int i;
	for(i = 0; i<n; i++)
	{
		++stepL;
		if(arr[i] == x)
			return i;
			
		//return step;
	}
	
	return -1;
}


int BinarySearch(int A[], int N, int x)
{
	int low = 0, high = N-1;
	
	while(low<= high)
	{
		int mid = (low+high)/2;
		stepB++;
		
		if(x == A[mid]) return mid;
		else if(x < A[mid]) high = mid-1;
		else low = mid+1;
 	}
 	return -1;
}

int TernarySearch(int A[], int N, int x)
{
	int low = 0,high = N-1;

	
	while(high>= low)
	{
		int alt = low+(low+high)/3;
		int ust = high-(low+high)/3;
		stepT++;
		
		if(x == A[alt]) return alt;
		if(x == A[ust]) return ust;
		if(x < A[alt]) high = alt-1;
		else if(x > A[ust]) low = ust+1;
		else 
		{
			low = alt+1, high = ust-1;
		}
 	}
 	return -1;
}

int main ()
{
	
	int i, arr[100];
	for(i = 1; i<=100; i++)
	{
		arr[i-1] = i;
}

int n = sizeof(arr) / sizeof(arr[0]);
int x = 50;
int indisT = TernarySearch(arr,n,x);
/*
int indisL = LinearSearch(arr,n,x);
int indisB = BinarySearch(arr,n,x);


cout<<"Lineerde Indis degeri: "<<indisL<<endl;
cout<<"Lineerde Adim sayisi: "<<stepL<<endl<<endl;

cout<<"Binaryde Indis degeri: "<<indisB<<endl;
cout<<"Binaryde Adim sayisi: "<<stepB<<endl<<endl;
*/

cout<<"Ternaryde Indis degeri: "<<indisT<<endl;
cout<<"Ternaryde Adim sayisi: "<<stepT<<endl<<endl;



}
