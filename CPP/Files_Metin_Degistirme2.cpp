#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

//Yazma ofstream
ofstream writer,writer2;
writer.open("vizeler.txt");
writer << "Guz Donemi Vize Notlari";
writer.close();

writer2.open("newDoc.txt");
//Okuma
ifstream reader,reader2;
reader.open("vizeler.txt");


string word;

while(reader>>word)
{

	 if(word == "Guz")
	{
		word = "Bahar";	
		
	}

		writer2<<word<<" ";


}
		reader.close();
		writer2.close();
		reader2.open("newDoc.txt");
		string newword;
		while (reader2>>newword) 
		{

			cout<<newword<<" ";
		}
		reader2.close();
		
	
		
		
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

