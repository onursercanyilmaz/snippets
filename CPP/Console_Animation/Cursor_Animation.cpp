#include <iostream>
#include <Windows.h>

using namespace std;
const int width = 80;
const int height = 20;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{

	for (int i = 0; i < width; i++) //left to right 
	{							//from x=0 and y=0, go to x=80 and y=0
		cout << ">";
		Sleep(60);
	}
	for (int i = 0; i < height; i++) //up to bottom
	{
		gotoxy(width - 1, i); //from x=79 and y=0, go to x=79 and y=i -- 20 times
		cout << "v";
		Sleep(60);
	}
	for (int i = 0; i < width; i++)//right to left
	{
		gotoxy(width - 1 - i, height - 1); //from x = 79 and y = 20, go to x=0 and y=20 --80 times
		cout << "<";
		Sleep(60);
	}
	for (int i = 0; i < height; i++)//bottom to up
	{
		gotoxy(0, height - 1 - i); //from x=0 and y=20, go to x=0 and y=0 --20 times
		cout << "v";
		Sleep(60);
	}

	cin.get();
}