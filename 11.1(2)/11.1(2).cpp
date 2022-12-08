#include <iostream>
using namespace std;

int main()
{
	char city;
	cout << "Enter the first letter of the city name: ";
	cin >> city;

	if (city == 'C')
		cout << "\nChernihiv\nPopulation: 0,282 million\nArea: 79 sq km\n";
	else if (city == 'D')
		cout << "\nDnipro\nPopulation: 0,968 million\nArea: 409,7 sq km\n";
	else if (city == 'K')
		cout << "\nKyiv\nPopulation: 2,966 million\nArea: 839 sq km\n";
	else if (city == 'L')
		cout << "\nLviv\nPopulation: 0,717 million\nArea: 149 sq km\n";
	else if (city == 'M')
		cout << "\nMariupol\nPopulation: 0,446 million\nArea: 166 sq km\n";
	else if (city == 'O')
		cout << "\nOdesa\nPopulation: 1,010 million\nArea: 162,4 sq km\n";
	else if (city == 'Z')
		cout << "\nZhytomyr\nPopulation: 0,265 million\nArea: 65 sq km\n";
	else
		cout << "\nThere is no such city or it is not entered in the database.\n";
}