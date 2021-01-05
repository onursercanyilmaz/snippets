#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	//Oluþturma ve yazma : ofstream
	ofstream fout;
	fout.open("ornek_metin.txt");
	fout<<"Merhaba Dunya!";
	fout<<"Tekrar Dene!";
	fout.close();
	
	//Okuma : ifstream
	ifstream fin;
	fin.open("ornek_metin.txt");
	
	string word;
	
	while(!fin.eof())
	{
		fin>>word;
		cout<<word;
	}
	//while(getline(fin, word))
	//	cout<<word<<endl;

	fin.close();
	

	
}
