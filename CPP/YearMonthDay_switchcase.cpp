#include<iostream>

using namespace std;

void monthDay(int year, int month)
{
	if (year % 4 == 0)
	{
		switch (month)
		{
		case 1:
			cout << "January " << year << " has 31 days";
			break;
		case 2:
			cout << "February " << year << " has 30 days";
			break;
		case 3:
			cout << "March " << year << " has 31 days";
			break;
		case 4:
			cout << "April " << year << " has 30 days";
			break;
		case 5:
			cout << "May " << year << " has 31 days";
			break;
		case 6:
			cout << "June " << year << " has 30 days";
			break;
		case 7:
			cout << "July " << year << " has 31 days";
			break;
		case 8:
			cout << "August " << year << " has 31 days";
			break;
		case 9:
			cout << "September " << year << " has 30 days";
			break;
		case 10:
			cout << "October " << year << " has 31 days";
			break;
		case 11:
			cout << "November " << year << " has 30 days";
			break;
		case 12:
			cout << "December " << year << " has 31 days";
			break;
		default:
			cout << "Please enter number between 1-12!";
		}
	}

	else
	{
		switch (month)
		{
		case 1:
			cout << "January " << year << " has 31 days";
			break;
		case 2:
			cout << "February " << year << " has 29 days";
			break;
		case 3:
			cout << "March " << year << " has 31 days";
			break;
		case 4:
			cout << "April " << year << " has 30 days";
			break;
		case 5:
			cout << "May " << year << " has 31 days";
			break;
		case 6:
			cout << "June " << year << " has 30 days";
			break;
		case 7:
			cout << "July " << year << " has 31 days";
			break;
		case 8:
			cout << "August " << year << " has 31 days";
			break;
		case 9:
			cout << "September " << year << " has 30 days";
			break;
		case 10:
			cout << "October " << year << " has 31 days";
			break;
		case 11:
			cout << "November " << year << " has 30 days";
			break;
		case 12:
			cout << "December " << year << " has 31 days";
			break;
		default:
			cout << "Please enter number between 1-12!";
		}
	}

	

}

int main()
{
	int month, year;
	cout << "Please enter year: ";
	cin >> year;
	cout << "Please enter month: ";
	cin >> month;

	monthDay(year,month);

}
