#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class WeightTraining
{

	//class declarations
private:
	string weightTrainingName;
	double weight;
	double reps;
	string question;
	string answer;
	string answer2;
	string response;
	string exerciseAnswer;
	double repTotal = 0;
	double setTotal = 0;
	double curl = 0; double skullCrusher = 0; double preacherCurl = 0;
	double benchPress = 0; 	double butterFly = 0; 	double calfRaise = 0;
	double squat = 0; double legPress = 0;
	double curlPB = 0; double skullCrusherPB = 0; double preacherCurlPB = 0;
	double benchPressPB = 0; double butterFlyPB = 0; double calfRaisePB = 0;
	double squatPB = 0; double legPressPB = 0;
	string userName = "empty"; string userFirst; string userLast;
	bool repeat = false;
	

public:
	void getPB();
	void writePB();
	void getUserName();
	void setWeight(double);
	double getWeight() const;
	void askQuestion();
	void showMenu();
	void showArmsMenu();
	void showLegsMenu();
	void menuCopy1();
	void menuCopy2();
	
	
};
