#include <iostream>

using namespace std;

int main()
{
	char days;
	cout << " I will give you your daily schedule for all week plaese choose day ";
	cout << endl << " Ñhoose one of this --> M-Monday,T-Tuesday,W-Wednesday, \n X-Thursday,F-Friday,S-Saturday,Y-Sunday" << endl;
	cout << "    ";
	cin >> days;
	switch (days)
	{
	case 'M':
	case 'm':
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 basketball";
		break;
	case 'T':
	case 't':
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 shool homework";
		break;
	case 'W':
	case 'w':
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 basketball";
		break;
	case 'X':
	case 'x':
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 shool homework";
		break;
	case 'F':
	case 'f':
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:45 to 19:40 basketball";
		break;
	case 'S':
	case 's':
		cout << "From 7:00 to 8:00 preparation for school" << endl << "From 8:00 to 13:15  school" << endl << "From 17:00 to 19:40 IT";
		break;
	case 'Y':
	case 'y':
		cout << "Sleeping till 10:00" << endl << "From 11:00 to 14:45  computer gaming" << endl << "From 15:30 to 17:30 basketball with friends";
		break;
	default:
		cout << "Choose one of this (M,T,W,X,F,S,Y)";
		break;
	}



	return 0;
}