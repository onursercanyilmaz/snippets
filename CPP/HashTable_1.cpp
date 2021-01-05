#include<iostream>

using namespace std;

#define size 9

/*
-1 : deleted
0 : empty
1 : full
*/

int arr[size];

void init()
{
	int i;
	for(i=0;i<size;i++)
	{
		//puttin -1 every index mean is empty
		arr[i] = 0;
	}
}
	void insert(int value)
	{
		int index = value % size;
		
		if(arr[index] == 0)
		{
			arr[index] = value;
		cout<<value<<" inserted to arr["<<index<<"]"<<endl;
		}
		else
		{
			cout<<"Collision! : already exist arr["<<index<<"] : "<<arr[index]<<endl;
			cout<<"Element couldn't inserted : "<<value<<endl;
			
		}
	}


void del(int value)
{
	int index = value % size;
	if(arr[index] == value)
		{
			arr[index] = -1;
			cout<<value<<" Deleted!"<<endl;
		}
	else
		cout<<"There is not "<<value<<"in the table!"<<endl;
	
}
void print()
{
	int i;
	for(i=0; i<size; i++)
		cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
}

void search(int value)
{
	int index = value % size;
	
	if(arr[index] == value)
		cout<<" Element found!"<<endl;
	else
		cout<<"X Element couldn't found!"<<endl;
}

int main()
{
	init();
	insert(0);
	insert(3);
	insert(9);
	insert(13);
	
	cout<<endl<<"Hash Table"<<endl;
	print();
	cout<<endl;
	
	cout<<"4 Searching..."<<endl;
	search(4);
	cout<<"3 Searching..."<<endl;
	search(3);
	
	cout<<"3 Deleting"<<endl;
	del(3);
	
	cout<<endl<<"Hash Table"<<endl;
	print();
	cout<<endl;
	
	
}
