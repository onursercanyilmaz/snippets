#include <fstream>
#include<iostream>

using namespace std;

int main()
{
	

	ofstream write; //output file stream
	write.open("poetry.txt"); //created a txt file
	write << " How happy is the blameless vestal's lot!\nThe world forgetting, by the world forgot.\nEternal sunshine of the spotless mind!\nEach pray'r accepted, and each wish resign\n " << endl; //written the text in txt file
	write.close(); //txt file has closed
	
	ifstream read; //input file stream
	read.open("poetry.txt"); //txt file has been read
	read >> noskipws; // provides to write separately
	
	char x; 
	while (read>> x) //read and write till the end.
	{
		cout << x;
	}
	
	system("pause");

}