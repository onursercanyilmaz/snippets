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
	fout.open("ornek_2.txt");
	fouts.open("temp.txt");
	
	fin.open("ornek_2.txt");
	fins.open("temp.txt");
	
	fout<<"0. satir: bu soruyu"<<endl;
	fout<<"1. satir: en cok"<<endl;
	fout<<"2. satir: ben cozmek"<<endl;
	fout<<"3. satir: istiyorum."<<endl;

	cout<<"Dosyaya gozat!"<<endl;
	string word;

	while(!fin.eof())
	{
		
		fin>>word;
		if(word=="0.")
		{
			fouts<<"0. satir: bu soruyu"<<endl;
		}
		else if(word=="3.")
		{
			fouts<<"3. satir: istiyorum."<<endl;
		}
}
fin.close();
fins.close();
fout.close();
fouts.close();

remove("ornek_2.txt");
rename("temp.txt","ornek_2.txt");


}

int main()
{
	writeLines();
	
}
