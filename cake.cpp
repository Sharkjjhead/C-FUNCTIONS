#include<iostream>
using namespace std;

void RandomDessert();

int main() {
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
	RandomDessert();
}

void RandomDessert() {
	int num = rand() % 100;
	if (num < 50)
		cout << "cake" << endl;
	else if (num < 80)
		cout << "pie" << endl;
	else 
		cout << "ice cream" << endl;
}