#include<bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
	int sum=0;
	for(int i:arr){
		sum+=i;
	}
	cout << (sum - *max_element(arr.begin(),arr.end()))
	<< " "<< (sum - *min_element(arr.begin(),arr.end())) << "\n";

}


int main(){
	vector<int> v{1,2,3,4,5};
	miniMaxSum(v);
}