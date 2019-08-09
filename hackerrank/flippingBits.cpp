#include<bits/stdc++.h>
using namespace std;

long flippingBits(long n) {
return UNINT_MAX^n;
}


int main(){
	cout << flippingBits(0) << endl;
	cout << flippingBits(802743475) << endl;
	cout << flippingBits(35601423) << endl;
}