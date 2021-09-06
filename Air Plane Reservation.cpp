#include <iostream>
#include <string>

using namespace std;

void printSeats(int[]);

int main()

{
	int seats[11] = {0};
	int input;
	int firstclass = 6, economy = 1;
	int passenger = 0;
	char answer = 'Y' / 'N';

	while (passenger < 10)
	{

		cout << "Please type 1 for 'First Class'\n"
			 << "Please type 2 for 'Economy'\n"
			 << "Your Choice ";
		cin >> input;

		if (input == 1 || input == 2)
		{
			if (seats[0] == 1 && seats[1] == 1 && seats[2] == 1 && seats[3] == 1 && seats[4] == 1 && seats[5] == 1 && seats[6] == 1 && seats[7] == 1 && seats[8] == 1 && seats[9] == 1)
				cout << "This Flight is FULL!"
					 << "The Next Flight leaves  in 3 hours\n\n";
		}

		if (input == 1)
		{

			if (firstclass <= 10)
			{
				cout << "\nYou Have Chosen First Class seats " << firstclass << endl;
				seats[firstclass++];
				++passenger;
			}

			if (firstclass > 10)
				cout << "\nThe First Class Seats is Full " << endl;
		}

		if (input == 2)
		{

			if (economy <= 5)
				cout << "\nYou Have Chosen Economy seats " << economy << endl;
			seats[economy++];
			++passenger;

			if (economy > 5)
				cout << "\nThe Economy Seats is Full" << endl;
		}
	}

	system("pause");
	return 0;
}