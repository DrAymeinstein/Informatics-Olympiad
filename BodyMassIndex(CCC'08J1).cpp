// https://dmoj.ca/problem/ccc08j1

#include <iostream>

using namespace std;

void BMI(float a, float b) {
	float bmi = a / (b * b);
	if (bmi > 25) {
		cout << "Overweight" << endl;
	} if (bmi >= 18.5 && bmi <= 25) {
		cout << "Normal weight" << endl;
	} if (bmi < 18.5) {
		cout << "Underweight" << endl;
	}
}

int main() {
	float weight;
	float height;
	cin >> weight >> height;

	BMI(weight, height);

	return 0;
}
