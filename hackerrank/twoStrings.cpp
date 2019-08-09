#include<bits/stdc++.h>
using namespace std;

string twoStrings(string s1, string s2) {
	bool alpha[26];
	fill(alpha,alpha+26,false);
	for(int i=0;i<s1.length();i++){
		int val = s1[i] -97;
		if(!alpha[val]){
			alpha[val] = true;
		}
	}

	for(int i=0;i<s2.length();i++){
		int val = s2[i] -97;
		if(alpha[val]){
			return "YES";
		}
	}

	return "NO";
}

int main(){
	cout << twoStrings("hello","simran");
}