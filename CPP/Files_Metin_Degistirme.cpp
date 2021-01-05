#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

//Yazma ofstream
ofstream fout;
fout.open("vizeler.txt");
fout << "Guz Donemi Vize Notlari";;


fout.close();

//Okuma
ifstream fin, fin2;
fin.open("vizeler.txt");


string word;

while(word != "Guz")
{


	 fin>>word;
	 //cout<<word<<endl;;
	 if(word == "Guz")
	{
		word = "Bahar";	
		fout.open("newDoc.txt");
		//Yaz
		fout<<word<<" Donemi Vize Notlari";
		fout.close();
		fin.close();
	
		fin2.open("newDoc.txt");
		string newword;
		while (fin2>>newword) 
			cout<<newword<<" ";
		
		fin2.close();
		break;
	}
	//else
	//	cout<<"Student name couldn't found: "<<endl;;
		
}

/*
	
	else
	{
		cout<<"Student name couldn't'found"<<endl;
		i = 0;
	}
	n++;	



}	*/
}
