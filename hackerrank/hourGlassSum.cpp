#include<bits/stdc++.h>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
	vector<int> v;
	for(int i=0;i+2<6;i++){
		for(int j=0;j+2<6;j++){
			int sum = arr.at(i).at(j)+arr.at(i).at(j+1)+arr.at(i).at(j+2)+arr.at(i+2).at(j)+arr.at(i+2).at(j+1)+arr.at(i+2).at(j+2)+arr.at(i+1).at(j+1);
			v.push_back(sum);
		}
	}

return *max_element(v.begin(),v.end());
}


int main(){
	vector<vector<int>> v{{-9,-9,-9,1,1,1},{0,-9,0,4,3,2},{-9,-9,-9,1,2,3},{0,0,8,6,6,0},{0,0,0,-2,0,0},{0,0,1,2,4,0}};
	cout << hourglassSum(v);	
}