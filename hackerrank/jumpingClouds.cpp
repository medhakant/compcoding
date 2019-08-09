#include<bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c) {
	int it = 0,count=0;
	int size = c.size();
	for(it;it<size;){
		if(it+2 < size && c.at(it+2)==0){
			count++;
			it+=2;
		}else if(it+1 < size && c.at(it+1)==0){
			count++;
			it++;
		}else{
			break;
		}
	}
	return count;
}

int main(){
	vector<int> v;
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);

	cout << jumpingOnClouds(v);
}