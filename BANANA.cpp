#include<iostream>
using namespace std;

bool isAppleorBanana(string duck);

int main() {

	cout << isAppleorBanana("Duck");
}

bool isAppleorBanana(string duck) {
if (duck == "Apple")
		return true;
else if (duck == "Banana")
		return true;
else
	return false;
}