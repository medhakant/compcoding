#include<bits/stdc++.h>

using namespace std;

int sockPair(int n, vector<int> v){
	map<int,int> mymap;
	map<int,int>::iterator it;
	for(auto i=v.begin();i!=v.end();++i){
		it = mymap.find(*i);
		if(it ==mymap.end()){
			mymap[*i]=1;
		}else{
			mymap[*i]++;
		}
	}
	int pair = 0;
	for(auto i=mymap.begin();i!=mymap.end();++i){
		pair+= (*i).second/2;
	}
	return pair;
}

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(20);
	v.push_back(10);
	v.push_back(10);

	cout << sockPair(v.size(),v);


}