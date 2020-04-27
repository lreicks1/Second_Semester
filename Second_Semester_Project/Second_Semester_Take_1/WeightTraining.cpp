#include "WeightTraining.h"
#include <iostream>
#include <string>

using namespace std;



void WeightTraining::getPB()
{
	ifstream theFile(userFirst + userLast + ".txt");

	while (theFile >> curlPB >> skullCrusherPB >> preacherCurlPB >>
		squatPB >> legPressPB >> calfRaisePB >> benchPressPB >> inclineBenchPB >> butterFlyPB)
	{
		string PBQuestion;
		cout << "Welcome back " << userFirst << endl;
		cout << "Would you like to view your current personal bests?" << endl;
		cout << "Press Y for yes, N for no." << endl;
		cin >> PBQuestion;
		if (PBQuestion == "y" or PBQuestion == "Y")
		{
			cout << endl << "The Personal Bests for " << userFirst << " " << userLast << " are:" << endl;
			cout << "Curls: " << curlPB << endl;
			cout << "Skull Crushers: " << skullCrusherPB << endl;
			cout << "Preacher Curls: " << preacherCurlPB << endl;
			cout << "Squats: " << squatPB << endl;
			cout << "Leg Press: " << legPressPB << endl;
			cout << "Calf Raises: " << calfRaisePB << endl;
			cout << "Flat Bench Press: " << benchPressPB << endl;
			cout << "Incline Bench Press: " << inclineBenchPB << endl;
			cout << "Butterflies: " << butterFlyPB << endl << endl;

		}
	}

}

void WeightTraining::writePB()
{
	ofstream newFile(userFirst + userLast + ".txt");

	newFile << curlPB << " " << skullCrusherPB << " " << preacherCurlPB << " " <<
		squatPB << " " << legPressPB << " "  << calfRaise << " " << 
		benchPressPB << " " << inclineBenchPB << " " << butterFlyPB << endl;
}

void WeightTraining::getUserName()
{
	string PBQuestion;
	cout << "Do you want to enter your name to record your Personal Bests?" << endl;
	cout << "If yes, press Y." << endl << "If you do not wish to, type N." << endl << endl;
	cin >> userName;
	if (userName == "Y" or userName == "y")
	{
		cout << "The name you enter will be used every time you want to record and view your pesonal bests" << endl;
		cout << "Please make certain you spell your name the same each time you log in." << endl;
		cout << "If you have used this program before, you will be able to view your personal bests." << endl;
		cout << "If this is you first time, a new record will be created to record your progress." << endl;
		cout << "Enter first name, then press enter." << endl;
		cin >> userFirst;
		cout << "Enter last name, then press enter." << endl;
		cin >> userLast;
		
		getPB();
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
	cout <<  endl;
	cout << "'I just use my muscles as a conversation piece, like someone walking a cheetah down 42nd Street.'" << endl;
	cout << "-Arnold Schwarzenegger" << endl << endl;
	cout << "What body part are you working today?" << endl;
	cout << "Enter 1 for arms." << endl;
	cout << "Enter 2 for legs." << endl;
	cout << "Enter 3 for chest" << endl;
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

void WeightTraining::showChestMenu()
{
	cout << "What leg exercise do you want to perform?" << endl;
	cout << "Enter 1 for Flat Bench Press." << endl;
	cout << "Enter 2 for Incline Bench Press." << endl;
	cout << "Enter 3 for Butterflies" << endl;
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
					if ((curl > curlPB) and (userName != "n") and (userName != "N"))
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
					if ((skullCrusher > skullCrusherPB) and (userName != "n") and (userName != "N"))
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
					if ((preacherCurl > preacherCurlPB) and (userName != "n") and (userName != "N"))
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
					if ((squat > squatPB) and (userName != "n") and (userName != "N"))
					{
						squatPB = squat;
						cout << "You set a NEW PERSONAL BEST for Squats!!!" << endl << endl;
						squat = 0;
					}
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
					if ((legPress > legPressPB) and (userName != "n") and (userName != "N"))
					{
						legPressPB = legPress;
						cout << "You set a NEW PERSONAL BEST for Leg Press!!!" << endl << endl;
						legPress = 0;
					}
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
					if ((calfRaise > calfRaisePB) and (userName != "n") and (userName != "N"))
					{
						calfRaisePB = calfRaise;
						cout << "You set a NEW PERSONAL BEST for Calf Raises!!!" << endl << endl;
						calfRaise = 0;
					}
				}

			}
					   
		}

		while (answer != "0"  and response == "3")
		{
			WeightTraining::showChestMenu();
			cin >> answer;

			while (answer == "1" or repeat == true)
			{
				cout << "Flat Bench Press" << endl;
				WeightTraining::menuCopy1();
				benchPress = benchPress + setTotal;
				WeightTraining::menuCopy2();


				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << benchPress << " lbs" << endl << endl;
					if ((benchPress > benchPressPB) and (userName != "n") and (userName != "N"))
					{
						benchPressPB = benchPress;
						cout << "You set a NEW PERSONAL BEST for Bench Press!!!" << endl << endl;
						benchPress = 0;
					}
				}
			}
			while (answer == "2" or repeat == true)
			{
				cout << "Incline Bench Press" << endl;
				WeightTraining::menuCopy1();
				inclinePress = inclineBenchPB + setTotal;
				WeightTraining::menuCopy2();

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << legPress << " lbs" << endl << endl;
					if ((inclinePress > inclineBenchPB) and (userName != "n") and (userName != "N"))
					{
						inclineBenchPB = inclinePress;
						cout << "You set a NEW PERSONAL BEST for Incline Press!!!" << endl << endl;
						inclinePress = 0;
					}
				}

			}
			while (answer == "3" or repeat == true)
			{
				cout << "Butterflies" << endl;
				WeightTraining::menuCopy1();
				butterFly = butterFly + setTotal;
				WeightTraining::menuCopy2();

				if (answer == "N" or answer == "n" or answer == "0")
				{
					cout << endl << "The total weight lifted doing this exercise is " << legPress << " lbs" << endl << endl;
					if ((butterFly > butterFlyPB) and (userName != "n") and (userName != "N"))
					{
						butterFlyPB = butterFly;
						cout << "You set a NEW PERSONAL BEST for Butterflies!!!" << endl << endl;
						butterFly = 0;
					}
				}

			}

		}
	}

	if (response == "0")
	{
		writePB();
		userName == "empty";
	}

}


