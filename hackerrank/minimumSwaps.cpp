#include<bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int> arr) {
	map<int,int> mymap;
	int swaps=0;
	int size = arr.size();
	for(int i=0;i<size;i++){
		mymap.insert(make_pair(arr.at(i),i+1));
	}
	bool visited[size+1];
	fill(visited,visited+size+1,false);
	for(int i=1;i<=size;i++){
		if(visited[i]==false){
			int temp = i;
			while(visited[temp]==false){
				visited[temp]=true;
				temp = mymap[temp];
				swaps++;
			}
			swaps--;
		}
	}
	return swaps;
}

int main(){
	vector<int> v{1,3,5,2,4,6,7};
	cout << minimumSwaps(v);
}