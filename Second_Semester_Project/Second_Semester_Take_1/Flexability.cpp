#include "Flexability.h"

void Flexability::flexibilityMenu()
{
	string input;
	int input2;
	Flexability flex;
	string answer;


	while (answer != "0")
	{
	
		flex.setstrechName();
		cin >> input;
		flex.settimePerStrech();
		cin >> input2;
		flex.setpreviousGoals();
		cin >> input2;
		flex.setnewGoals();
		cin >> input2;
		cout << "Do you want to repeat? Press 0 to exit to main menu." << endl;
		cin >> answer;
	}
}
