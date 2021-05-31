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

void writeLines() 
{
	ofstream fout,fouts;
	ifstream fin, fins;
	fout.open("ornek_3.txt");
	fouts.open("temp1.txt");
	
	fin.open("ornek_3.txt");
	fins.open("temp1.txt");
	
	fout<<"Bu soruyu en cok ben cozmek istiyorum."<<endl;
	

	cout<<"Dosyaya gozat!"<<endl;
	string word;

	while(fin>>word)
	{
		
		
		
		if(word=="soruyu")
		{
			word="bonusu";
			
		}
		else if(word=="cozmek")
		{
			word="almak";	
		}
		
		fouts<<word<<" ";
}
fin.close();
fins.close();
fout.close();
fouts.close();

remove("ornek_3.txt");
rename("temp1.txt","ornek_3.txt");


}

int main()
{
	writeLines();
	
}
