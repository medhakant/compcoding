#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>> circles;
map<int,int> travelled;
int counter;

void BFS(int index){
	if(travelled[index]==-1){
		travelled[index]=counter;
		for(int x:circles[index]){
			BFS(x);
		}
	}

}

int maxCircle(vector<vector<int>> queries) {
	unordered_set<int> set;
	for(auto v:queries){
		for(int i:v){
			set.insert(i);
		}
	}

	for(int i:set){
		travelled.insert(make_pair(i,-1));
	}
	int size = set.size();

	for(auto v:queries){
		int a = v.at(0);
		int b = v.at(1);
		circles[a].push_back(b);
		circles[b].push_back(a);
	}
	counter =0;
	for(int i:set){
		if(travelled[i]==-1){
			BFS(i);
			counter++;
		}
	}
	
	int max[counter];
	fill(max,max+counter,0);
	for(auto it:travelled){
		max[it.second]++;
	}

	return *max_element(max,max+counter);
}

int main(){
	vector<vector<int>> v{{1,2},{3,4},{1,3},{5,7},{5,6},{7,4},{8,9},{9,10}};
	cout << maxCircle(v);
}