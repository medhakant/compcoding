#include<bits/stdc++.h>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
if(d==0){
	return a;
}
reverse(a.begin(),a.begin()+d);
reverse(a.begin()+d,a.end());
reverse(a.begin(),a.end());
return a;
}

int main(){
	vector<int> v{1,2,3,4,5};
	for(int i:rotLeft(v,2)){
		cout << i << " ";
	}
}