#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>

using namespace std;

class cardio
{
private:
	string exerciseName;
	int reps, weight;

public:


	void workout();
	void workouttips();
	void breathingtips();
	void CardioMenu();
	int Burpees = 30;
	int Burpeescount = 0;
	int JumpRope = 30;
	int JumpRopecount = 0;
	int JumpingJacks = 30;
	int JumpingJackscount = 0;
	int Planks = 30;
	int Plankscount = 0;
	int RunningtheStairs = 30;
	int RunningtheStairscount = 0;
	int Running = 15;
	int Runningcount = 6;

};