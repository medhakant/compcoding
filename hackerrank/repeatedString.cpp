#include<bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n) {
	vector<int> v;
	int count = 0;
	long numOccur=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a'){
			v.push_back(i);
			count++;
		}
	}

	numOccur = (n/s.length())*count;
	int extra = n%s.length();
	for(int i=0;i<v.size();i++){
		if(v.at(i)<extra){
			numOccur++;
		}
	}
	return numOccur;
}

int main(){
	string s = "aba";
	cout << repeatedString(s,10);
}