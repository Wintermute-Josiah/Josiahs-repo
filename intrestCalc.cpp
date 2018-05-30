#include <iostream> 
#include <math.h>

using namespace std;

int main(){


	float A;
	float P;
	const float e = 2.71828;
	float  r;
	float t;
	float power;

	cout << "Please enter a starting value: ";
	cin >> P;
	cout << "enter a rate: ";
	cin >> r;
	cout << "enter the amount of time: ";
	cin >> t;
	
	power = r * t;
	A = pow (e , power);
	A = P * A;
	cout << A << endl;
	

	return 0;
}
