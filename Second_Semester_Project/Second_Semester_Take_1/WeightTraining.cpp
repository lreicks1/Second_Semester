#include "WeightTraining.h"
#include <iostream>
#include <string>

using namespace std;



void WeightTraining::getPB()
{
	ifstream theFile(userFirst + userLast + ".txt");

	while (theFile >> curlPB >> skullCrusherPB >> preacherCurlPB)
	{
		string PBQuestion;
		cout << "Would you like to view your current personal bests?" << endl;
		cin >> PBQuestion;
		if (PBQuestion == "y" or PBQuestion == "Y")
		{
			cout << "Curls: " << curlPB << endl;
			cout << "Skull Crushers: " << skullCrusherPB << endl;
			cout << "Preacher Curls: " << preacherCurlPB << endl << endl;

		}
	}

}

void WeightTraining::writePB()
{
	ofstream newFile(userFirst + userLast + ".txt");

	newFile << curlPB << " " << skullCrusherPB << " " << preacherCurlPB << endl;
}

void WeightTraining::getUserName()
{
	string PBQuestion;
	cout << "Do you want to record enter your name to record your Personal Bests?" << endl;
	cout << "If yes, press Y." << endl << "If you do not wish to, type N." << endl << endl;
	cin >> userName;
	if (userName == "Y" or userName == "y")
	{
		cout << "Enter first name." << endl;
		cin >> userFirst;
		cout << "Enter last name." << endl;
		cin >> userLast;
		
	}
	
}

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
	
	cout << "What body part are you working today?" << endl;
	cout << "Enter 1 for arms." << endl;
	cout << "Enter 2 for legs." << endl;
	//cout << "Enter 3 for chest" << endl;
	cout << "Press 0 to exit to main menu." << endl << endl;
	cin >> response;
	
}

void WeightTraining::showArmsMenu()
{
	cout << "What arm exercise do you want to perform?" << endl;
	cout << "Enter 1 for Curls." << endl;
	cout << "Enter 2 for Skull Crushers." << endl;
	cout << "Enter 3 for Preacher Curls." << endl;
	cout << "Press 0 to go back" << endl;
	cin >> answer;
}

void WeightTraining::showLegsMenu()
{
	cout << "What leg exercise do you want to perform?" << endl;
	cout << "Enter 1 for Squats." << endl;
	cout << "Enter 2 for Leg Press." << endl;
	cout << "Enter 3 for Calf Raises" << endl;
	cout << "Press 0 to go back." << endl;
}

void WeightTraining::menuCopy1()
{
	cout << "What is the weight?" << endl;
	cin >> weight;
	cout << "How many reps?" << endl;
	cin >> reps;
	setTotal = reps * weight;
	cout << "the total for this set is " << setTotal << " lbs." << endl << endl;

}

void WeightTraining::menuCopy2()
{
	cout << "Do you want to do another set?" << endl;
	cout << "Press " << "Y" << " to do another set." << endl;
	cout << "Press N to do a different exercise." << endl;
	//cout << "Press 0 to return to main menu" << endl << endl;
	cin >> answer;
	if (answer == "Y" or answer == "y")
	{
		repeat = true;
	}
	else repeat = false;
	
}


void WeightTraining::askQuestion()
{
	
	while (response != "0") 
	{
		answer = "99";
		if (userName == "empty")
		{
			getUserName();
			getPB();
		}

		WeightTraining::showMenu();
	

		while (answer != "0" and response == "1")
		{
			WeightTraining::showArmsMenu();
			
			while (answer == "1" or repeat == true)
			{
				
				cout << "Curls" << endl;
				WeightTraining::menuCopy1();
				curl = curl + setTotal;
				WeightTraining::menuCopy2();
			

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << curl << " lbs" << endl << endl;
					if ((curl > curlPB) and (userName != "n" or userName != "N"))
					{
						curlPB = curl;
						cout << "You set a NEW PERSONAL BEST for Curls!!!" << endl << endl;
						curl = 0;
					}
				}
								
			}
			while (answer == "2" or repeat == true)
			{
				cout << "skull crushers" << endl;
				WeightTraining::menuCopy1();
				skullCrusher = skullCrusher + setTotal;
				WeightTraining::menuCopy2();
				

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << skullCrusher << " lbs" << endl << endl;
					if ((skullCrusher > skullCrusherPB) and (userName != "n" or userName != "N"))
					{
						skullCrusherPB = skullCrusher;
						cout << "You set a NEW PERSONAL BEST for Skull Crushers!!!" << endl << endl;
						skullCrusher = 0;
					}
				}
				
			}
			while (answer == "3" or repeat == true)
			{
				cout << "Preacher curls" << endl;
				WeightTraining::menuCopy1();
				preacherCurl = preacherCurl + setTotal;
				WeightTraining::menuCopy2();
				

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << preacherCurl << " lbs" << endl << endl;
					if ((preacherCurl > preacherCurlPB) and (userName != "n" or userName != "N"))
					{
						preacherCurlPB = preacherCurl;
						cout << "You set a NEW PERSONAL BEST for Skull Crushers!!!" << endl << endl;
						preacherCurl = 0;
					}
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
				
				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << calfRaise << " lbs" << endl << endl;
				}

			}



		}
	}

	if (response == "0")
	{
		writePB();
	}

}


