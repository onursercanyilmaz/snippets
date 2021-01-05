#include<iostream>
#include<list>
using namespace std;



/*
-1 : deleted
0 : empty
1 : full
*/

class Hash{
	int size;
	list<int> *table;
	
	public:
		void insert(int value);
		void del(int value);
		void print();
		void search(int value);
		
		int hashFunction(int value)
		{
			return (value % size);
		}
		
		
		
	Hash(int b)
	{
		this -> size = b;
		table = new list<int>[size];
	}
};




void Hash::insert(int value)
{
	int index = hashFunction(value);
	int i;
	for(i=0; i<size; i++)
	{
		
		index = (value + 1) % size;

	if(table[index]==0)
	{
		list<int>::iterator x;
	for(x=table[i].begin(); x != table[i].end();++x)
	{
		table[index].push_back(value);	
		break;
		
	}
	cout<<endl;}
		
	}
	
			
			
	}

/*
void Hash::del(int value)
{
	
	int index = hashFunction(value);
	if(arr[index] == value)
		{
			arr[index] = -1;
			cout<<value<<" Deleted!"<<endl;
		}
	else
		cout<<"There is not "<<value<<"in the table!"<<endl;
	
}*/
void Hash::print()
{
	int i;
	for(i=0; i<size; i++)
	{
	cout<<i <<". index ";
	
	list<int>::iterator x;
	for(x=table[i].begin(); x != table[i].end();++x)
	{
		cout<<" --> "<<*x;
		
	}
	cout<<endl;}
}
/*
void Hash::search(int value)
{
	int index = value % size;
	
	if(arr[index] == value)
		cout<<" Element found!"<<endl;
	else
		cout<<"X Element couldn't found!"<<endl;
}
*/
int main()
{
	int a[] = {0,5,3,8,3,8,4,2,6,4,4};
	int n = sizeof(a)/sizeof(a[0]);
	
	Hash h(5);

for(int i=0;i<n;i++)
h.insert(a[i]);	


h.print();
	/*init();
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
	*/
	
}
