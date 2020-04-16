#include "WeightTraining.h"
#include <iostream>
#include <string>

using namespace std;


//sets the WeightTrainings weight
void WeightTraining::setWeight(double w)
{
	weight = w;
}

//returns the WeightTrainings weight
double WeightTraining::getWeight() const
{
	return weight;
}

void WeightTraining::showMenu()
{
	
	cout << "What body part are you working today" << endl;
	cout << "Enter 1 for arms" << endl;
	cout << "Enter 2 for legs" << endl;
	//cout << "Enter 3 for chest" << endl;
	cout << "Press 0 to exit to main menu." << endl << endl;
	cin >> response;
	
}

void WeightTraining::showArmsMenu()
{
	cout << "What arm exercise do you want to perform?" << endl;
	cout << "Enter 1 for curls" << endl;
	cout << "Enter 2 for skull crushers" << endl;
	cout << "Enter 3 for preacher curls" << endl;
	cout << "Press 0 to go back" << endl;
	cin >> answer;
}

void WeightTraining::showLegsMenu()
{
	cout << "What leg exercise do you want to perform?" << endl;
	cout << "Enter 1 for squats" << endl;
	cout << "Enter 2 for leg press" << endl;
	cout << "Enter 3 for calf raises" << endl;
	cout << "Press 0 to go back" << endl;
}

void WeightTraining::menuCopy1()
{
	cout << "What is the weight?" << endl;
	cin >> weight;
	cout << "How many reps?" << endl;
	cin >> reps;
	setTotal = reps * weight;
	cout << "the total for this set is " << setTotal << " lbs" << endl << endl;

}

void WeightTraining::menuCopy2()
{
	cout << "do you want to do another set?" << endl;
	cout << "Press " << "Y" << " to do another set." << endl;
	cout << "Press N to do a different exercise." << endl;
	//cout << "Press 0 to return to main menu" << endl << endl;
	cin >> answer;
	
	
}


void WeightTraining::askQuestion()
{
	
	
	string answer2;
	bool repeat = false;
	//response = 1;

	while (response != "0") 
	{
		answer = "99";
		WeightTraining::showMenu();
	

		while (answer != "0" and response == "1")
		{
			//cout << "showArmsMenu" << endl;
			WeightTraining::showArmsMenu();
			
			while (answer == "1" or repeat == true)
			{
				cout << "Curls" << endl;
				WeightTraining::menuCopy1();
				curl = curl + setTotal;
				WeightTraining::menuCopy2();
				if (answer == "Y" or answer == "y")
				{
					repeat = true;
				}
				else repeat = false;

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << curl << " lbs" << endl << endl;
				}
								
			}
			while (answer == "2" or repeat == true)
			{
				cout << "skull crushers" << endl;
				WeightTraining::menuCopy1();
				skullCrusher = skullCrusher + setTotal;
				WeightTraining::menuCopy2();
				if (answer == "Y" or answer == "y")
				{
					repeat = true;
				}
				else repeat = false;

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << skullCrusher << " lbs" << endl << endl;
				}
				
			}
			while (answer == "3" or repeat == true)
			{
				cout << "Preacher curls" << endl;
				WeightTraining::menuCopy1();
				preacherCurl = preacherCurl + setTotal;
				WeightTraining::menuCopy2();
				if (answer == "Y" or answer == "y")
				{
					repeat = true;
				}
				else repeat = false;

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << preacherCurl << " lbs" << endl << endl;
				}				
			}
					
		}

		while (answer != "0"  and response == "2")
		{
			WeightTraining::showLegsMenu();
			cin >> answer;
			
			while (answer == "1" or repeat == true)
			{
				cout << "Squats" << endl;
				WeightTraining::menuCopy1();
				squat = squat + setTotal;
				WeightTraining::menuCopy2();
				if (answer == "Y" or answer == "y")
				{
					repeat = true;
				}
				else repeat = false;

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << squat << " lbs" << endl << endl;
				}
			}
			while (answer == "2" or repeat == true)
			{
				cout << "Leg Press" << endl;
				WeightTraining::menuCopy1();
				legPress = legPress + setTotal;
				WeightTraining::menuCopy2();
				if (answer == "Y" or answer == "y")
				{
					repeat = true;
				}
				else repeat = false;

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << legPress << " lbs" << endl << endl;
				}

			}
			while (answer == "3" or repeat == true)
			{
				cout << "Calf Raises" << endl;
				WeightTraining::menuCopy1();
				calfRaise = calfRaise + setTotal;
				WeightTraining::menuCopy2();
				if (answer == "Y" or answer == "y")
				{
					repeat = true;
				}
				else repeat = false;

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << calfRaise << " lbs" << endl << endl;
				}

			}



		}
	}

}


