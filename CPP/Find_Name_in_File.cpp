#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

//Yazma ofstream
ofstream fout;
fout.open("student.txt");
fout << "Onur Yilmaz"<<endl;
fout <<"Rabia Azman"<<endl;
fout <<"Ayse Veli"<<endl;

fout.close();

//Okuma
ifstream fin;
fin.open("student.txt");


string word;
string name;
int n =0;
cout<<"Please enter student name or surname: "<< endl;
cin>>name;
while(name != word)
{


	 fin>>word;
	 //cout<<word<<endl;;
	 if(word == name)
	{
		getline(fin,word);
		cout<<"Student name found: "<<name<<" "<<word<<endl;
		fin.close();
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
