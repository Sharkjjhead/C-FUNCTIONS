#include<iostream>
using namespace std;

void HiChew();

int main() {
	HiChew();
}

void HiChew() {
	int num = rand() % 100;
	if (num < 25)
		cout << "mango" << endl;
	else if (num < 50)
		cout << "pineapple" << endl;
	else if (num < 75)
		cout << "dragonfruit" << endl;
	else
		cout << "kiwi" << endl;
}