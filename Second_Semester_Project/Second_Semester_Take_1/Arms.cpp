#include "Arms.h"
#include <iostream>
#include <string>

using namespace std;


void Arms::armQuestion()
{
	string answer;
	string response;


	while (answer != "0" or answer == "99")
	{
		cout << "inside arms class" << endl;
		cout << "What arm exercise are you doing today?" << endl;
		cout << "1. Curls" << endl;
		cout << "2. Bench" << endl;
		cout << "Press 0 to return to main menu." << endl << endl;
		cin >> answer;


		while (answer == "1")
		{
			cout << "What is the weight?" << endl;
			cin >> weight;
			cout << "How many reps?" << endl;
			cin >> reps;

			double total = reps * weight;
			cout << "the total weight is " << total << endl << endl;

			cout << "do you want to do another set?" << endl;
			cout << "Press 1 do do another set." << endl;
			cout << "Press 99 to do a different arm exercise." << endl;
			cout << "Press 0 to return to main menu" << endl << endl;
			cin >> answer;
		}
		while (answer == "2")
		{
			cout << "bench" << endl;
			cin >> answer;
		}

	}
		
}
		

	





