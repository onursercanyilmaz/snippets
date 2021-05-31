#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void readWord() //Read Word by word
{
	ifstream fin;
	fin.open("ornek_1.txt");
	
	string word;
	
	while(!fin.eof())
	{
		fin>>word;
		cout<<word<<" ";
	}
	cout<<endl;
	fin.close();
}

void readChars() //Read Char by char
{
		ifstream fin;
	fin.open("ornek_1.txt");
	
	string ch;
	
	while(!fin.eof())
	{
		fin>>ch;
		cout<<ch<<" ";
	}
		cout<<endl;
	fin.close();
}

void readLines() // Read Line by line
{
	ifstream fin;
	fin.open("ornek_1.txt");
	
	string line;
	
	while(!fin.eof())
	{
		getline(fin,line);
		cout<<line<<" ";
	}
		cout<<endl;
	fin.close();
}

int main()
{
	readWord();
	readChars();
	readLines();
	
}
