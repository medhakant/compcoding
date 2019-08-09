#include<bits/stdc++.h>
using namespace std;

void checkMagazine(vector<string> magazine, vector<string> note) {
	map<string,int> myMap;
	map<string,int>::iterator it;
	for(auto s:magazine){
		it = myMap.find(s);
		if(it==myMap.end()){
			myMap.insert(make_pair(s,1));
		}else{
			(*it).second++;
		}
	}
	for(auto s:note){
		it = myMap.find(s);
		if(it==myMap.end()){
			cout << "No\n";
			return;
		}else{
			if((*it).second<=0){
				cout << "No\n";
				return;
			}else{
				(*it).second--;
			}
		}
	}
	cout << "Yes\n";
	return;
    

}

int main(){
	 vector<string> m{"give", "me", "one", "grand", "today", "night"};
	 vector<string> n{"give", "one", "grand", "today", "one"};
	 checkMagazine(m,n);
}