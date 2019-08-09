#include<bits/stdc++.h>
using namespace std;

int maxSubsetSum(vector<int> arr) {
	int incl=0,excl=0;
	bool flag=true;
	for(int i:arr){
		if(flag){
			incl = i;
			flag = false;
		}else{

			int new_excl = (incl>excl)? incl :excl;
			incl = excl+i;
			excl = new_excl;
		}

	}
	return (incl>excl)? incl :excl;
}

int main(){
	vector<int> v{3,5,-7,8,10};
	cout << maxSubsetSum(v);
}