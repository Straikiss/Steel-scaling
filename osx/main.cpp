#include <iostream>

using namespace std;

int main() 
{
	// my build
	int myBuild = 18;
	
	// damage at 15 lvl
	int dPunch = 72;
	int dBullRush = 210;
	int dShieldSlam = 430;
	
	// scaling
	float sPunch = 0.6;
	float sBullRush = 0.8;
	float sShieldSlam = 0.9;
	
	// points
	int cardPoint = 6;
	
	int cards;
	
	cout << "Enter cards: ";
	cin >> cards;
	
	cards *= cardPoint;
	
	// add scaling * cards
	sPunch *= cards;
	sBullRush *= cards;
	sShieldSlam *= cards;
	
	// add damage + scaling
	dPunch += sPunch;
	dBullRush += sBullRush;
	dShieldSlam += sShieldSlam;
	
	cout << "[LMB] Punch: " << dPunch << endl;
	cout << "[Q] Bull rush: " << dBullRush << endl;
	cout << "[R] Shield slam: " << dShieldSlam << endl;
	
	return 0;	
}
