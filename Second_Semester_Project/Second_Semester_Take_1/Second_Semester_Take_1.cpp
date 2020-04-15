//Lyle Reicks
//Ian Waddell
//Skylar Brown


#include <iostream>
#include <string>
#include <fstream>
#include "WeightTraining.h"
#include "cardio.h"
#include <chrono>
#include "Flexability.h"


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
		cout << "3. Flexibility" << endl;
		cout << "Press 0 to exit program" << endl;

		cin >> input;
			   		 	
		if (input == "1")
		{

			
			WeightTraining newTraining;
			newTraining.askQuestion();
		}

		else if (input == "2")
		{
			cardio newCardio;
			newCardio.workout();
			//newCardio.CardioMenu();
			
		}

		else if (input == "3")
		{
			
			Flexability newFlex;
			newFlex.flexibilityMenu();
		}
		
	}
	return 0;
}

