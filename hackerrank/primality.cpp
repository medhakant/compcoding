#include<bits/stdc++.h>
using namespace std;

string primality(int n) {
if(n==1){
	return "Not Prime";
}else if(n==2){
	return "Prime";
}
int index = 2;
while(index*index <= n){
	if(n%index == 0){
		return "Not Prime";
	}
	index++;
}
return "Prime";

}

int main(){
cout << primality(49) << "\n";
cout << primality(71) << "\n";
cout << primality(1009) << "\n";
}

