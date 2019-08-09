#include<bits/stdc++.h>
using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
	int luck=0;
	int counter =k;
	sort(contests.begin(),contests.end(),[](auto a,auto b){return *a.begin()>*b.begin();});
	for(auto v:contests){
		cout << v[0];
		if(v[1]==0){
			luck+=v[0];
		}else{
			if(counter>0){
				luck+=v[0];
				counter--;
			}else{
				luck-=v[0];
			}
		}
		cout << "l"<< luck << "\n";
	}
	return luck;


}

int main(){
	vector<vector<int>> v{{5,1},{2,1},{1,1},{8,1},{10,0},{5,0}};
	cout << luckBalance(3,v);
}