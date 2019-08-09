#include<bits/stdc++.h>
using namespace std;

int countingValleys(int n, string s) {
	bool flag = true;
	int level=0,count=0;
	for(int i=0;i<n;i++){
		if(s[i]=='U'){
			level++;
			if(level==0){
			count++;
			}
		}else if(s[i]=='D'){
			level--;
		}else{
			return 0;
		}
	}
return count;
}

int main(){
	string s = "UDDDUDUU";
	cout << countingValleys(s.length(),s);
}