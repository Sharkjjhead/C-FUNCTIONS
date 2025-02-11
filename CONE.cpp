#include<iostream>
using namespace std;
float ConeVol(int r, int h);

int main() {

	cout << ConeVol(4, 5);
}

float ConeVol(int r, int h) {
	return 3.14 * (r * r) * h / 3;
}