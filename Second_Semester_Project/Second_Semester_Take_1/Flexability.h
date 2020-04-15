#pragma once

#include <iostream>
#include <string>
using namespace std;
#pragma once

#include <iostream>
#include <string>
#include <fstream>


class Flexability
{
	
	private:
		string strechName;
		int timePerStrech;
		//Ask what there goals are such as streching and touching there toes.
		int newGoals;
		int previousGoals;
		// Streching reps is how many times they do there streches for example strech one leg for 10 seconds three times.
		int strechingReps;
	public:
		void flexibilityMenu();
		void setstrechName() { cout << "What strech will you do?" << endl; }
		void settimePerStrech() { cout << "How many seconds will you do your strech for?" << endl; }
		void setpreviousGoals() { cout << "What was your previous goal's length for streching?" << endl; }
		void setnewGoals() { cout << "How many seconds would you like to set your strech goal to?" << endl; }
};

