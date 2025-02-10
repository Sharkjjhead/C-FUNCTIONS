#include<iostream>
using namespace std;

bool isPotato(string bob);

int main() {

	cout << isPotato("potato");
}

bool isPotato(string bob) {
if (bob == "potato") //char is single quotes string has double quotes
	return true;
else
		return false;
}