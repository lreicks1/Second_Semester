#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Arms
{
private:
	string exerciseName;
	int reps, weight;

public:
	
	
	void armQuestion();
	//void armQuestion(string);
	void setReps(int);
	double getReps();

	void setWeight(int);
	double getWeight();

	double calculateWeight();

};

