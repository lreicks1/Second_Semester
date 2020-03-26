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
	double height;
	string question;

public:
	void setName(string);
	
	void setHeight(double);
	void setWeight(double);
	string getName() const;
	double getHeight() const;
	double getWeight() const;

	void askQuestion();
	void askQuestion(string);
};
