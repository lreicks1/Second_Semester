#include "cardio.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds



/*
void cardio::CardioMenu()
{
	int menucount = 10;
	while (menucount != 100) {
		cout << "Cardio Menu" << endl << endl;
		cout << "What are you wanting to do today?" << endl;
		cout << "1. Work OUT!" << endl;
		cout << "2. How to do each work out" << endl;
		cout << "3. Breathing Tips" << endl;
		cout << "Press 0 to go to the main menu" << endl;
		cin >> menucount;

		if (menucount == 1)
		{
			workout();
		}

		if (menucount == 2)
		{
			workouttips();
		}
		if (menucount == 3)
		{
			breathingtips();
		}
	}

}

*/


void cardio::workout() {
	int menucount = 10;
	while (menucount != 0) {
		cout << "Workout Menu" << endl << endl;
		cout << "1. Running" << endl;
		cout << "2. Light Workout" << endl;
		cout << "3. Heavy Workout" << endl;
		cout << "Press 0 to exit to main menu." << endl;
		cin >> menucount;

		if (menucount == 1)
		{
			cout << "This workout will have you run for 2 minutes and walk for one this will go for " << Running << " mintues.  For  Keep runnning till you see the STARS APPEAR ******" << endl;
			cout << "Ready!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Set!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Go!" << endl;

			for (int i = 0; i < Runningcount; i++) {
				sleep_until(system_clock::now() + seconds(120));
				cout << "***********  WALK ***********  " << endl;
				cout << "***********  WALK ***********  " << endl;
				cout << "***********  WALK ***********  " << endl;
				cout << "***********  WALK ***********  " << endl;
				sleep_until(system_clock::now() + seconds(60));
				cout << "***********  RUN  ***********  " << endl;
				cout << "***********  RUN  ***********  " << endl;
				cout << "***********  RUN  ***********  " << endl;
				cout << "***********  RUN  ***********  " << endl;
			}
			cout << "Good Job you did it!  " << endl;
		}

		if (menucount == 2)
		{

		}
		if (menucount == 3)
		{

		}
	}

}