#include<bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
	sort(arr.begin(),arr.end());
	int last = INT_MIN;
	int min_sum = INT_MAX;
	for(int i:arr){
		int diff = abs(i-last);
		if(diff<min_sum){
			min_sum=diff;
		}
		last = i;
	}
	return min_sum;
}

int main(){
	vector<int> v{1, -3, 71, 68, 17};
	cout << minimumAbsoluteDifference(v);
}