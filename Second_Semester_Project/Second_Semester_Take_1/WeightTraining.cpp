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



void WeightTraining::askQuestion()
{
	cout << "What arm exercise are you doing today?" << endl;
	cout << "1 = Curls" << endl;
	cout << "2 = Skull Crushers" << endl;
	
}
