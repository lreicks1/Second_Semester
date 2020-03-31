
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
		cout << "What are you wanting to do today?" << endl;
		cout << "1. Lift Weights" << endl;
		cout << "2. Cardio" << endl;
		cout << "3. Nutrition" << endl;
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

