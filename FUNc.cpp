//Ctrl A,K,C
#include<iostream>
using namespace std;

float PyramidVol(int L,int W,int H);

int main() {

	cout<<PyramidVol(2, 3, 4);
}

float PyramidVol(int L, int W, int H) {
return (L * W * H) / 3;
}