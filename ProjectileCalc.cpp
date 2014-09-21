/*
 * Source.cpp
 *
 *  Created on: 21-Sep-2014
 *      Author: Rohan Chaturvedi
 *
 */
# include <iostream>
# include <cmath>
using namespace std;

// Projectile motion calculator

void parabol(float inV, float ang, float height)//initial Vel, angle of launch, height of launch
{
	//inV = ang = height = 0;
	float g = 9.8;//absolute value of accel due to gravity
	float angrad = (ang * (3.14/180));// convert angle from deg to rad

	//Velocity components
	float inVx = (inV * cos(angrad));//horizontal
	float inVy = (inV * sin(angrad));//vertical

	//Time of Flight
	float tflight = ((2*inVy)/g);

	// Max Height
	float thmax = (inVy/g);//Time to max height
	float hmax = (pow(inV, 2) * (pow(sin(angrad), 2)));//max height

	//Range
	float maxrange = ((pow(inV, 2)/g) * sin(2*angrad));

	cout << "Your projectile launched at " << inV << " m/s at " << ang << " degrees. " << endl ;
	cout << "Horizontal Velocity: " << inVx << endl;
	cout << "Vertical Velocity: " << inVy << endl;
	cout << "Maximum Range achieved: " << maxrange << "m in " << tflight << " s. " << endl;
	cout << "Maximum Height achieved: " << hmax << "m in " << thmax << "s. " << endl;
}

int main(){
	float launchV = 0;
	float launchang = 0;
	float launchh = 0;

	cout << "Welcome to the Projectile Motion Simulator! " << endl;
	cout << "Please enter the initial launch speed (m/s): ";
	cin >> launchV;
	cout << endl << " Please enter the initial launch angle (deg): ";
	cin >> launchang;
	cout << endl << " -------------------------" << endl;

	parabol(launchV, launchang, launchh);


	return 0;
}
