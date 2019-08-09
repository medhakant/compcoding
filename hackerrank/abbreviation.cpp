#include<bits/stdc++.h>
using namespace std;

void rec(string a,string b);

unordered_set<string> memo;
bool possible;

string abbreviation(string a, string b) {
	possible = false;
	memo.clear();
	rec(a,b);
	return possible ? "YES" : "NO";
}

void rec(string a,string b){
	if(possible|| a.size()<b.size())
		return;

	if(b.empty()){
		if(all_of(a.begin(),a.end(),[](char e){return islower(e);}))
			possible = true;
		return;
	}

	auto p = memo.insert(a+'#'+b);
	if(!p.second) return;

	char fc = a[0];
	a.erase(0,1);
	if(islower(fc)) rec(a,b);
	if(toupper(fc)!=b[0]) return;
	b.erase(0,1);
	rec(a,b);
	return;
}

int main(){
	cout << abbreviation("daBcD","ABC");
}