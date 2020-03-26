
#include <iostream>
#include <string>
#include <fstream>
#include "WeightTraining.h"
#include "Arms.h"


using namespace std;


int main()

{
	string input;

	while (input != "0")
	{
		cout << "MAIN MENU" << endl << endl;
		cout << "What are you working today?" << endl;
		cout << "1. Arms" << endl;
		cout << "2. Legs" << endl;
		cout << "3. Chest" << endl;
		cout << "Press 0 to exit program" << endl;

		cin >> input;
			   		 	
		if (input == "1")
		{

			
			Arms newArms;
			newArms.armQuestion();
			cout << "left arms class" << endl;
		}

		else if (input == "2")
		{
			cout << "you are in legs" << endl;

		}

		else
		{
			cout << "exiting program";
		}
		
	}
	return 0;
}

