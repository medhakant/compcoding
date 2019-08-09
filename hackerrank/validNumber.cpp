#include<bits/stdc++.h>
using namespace std;


bool isNumber(string s) {
		s.erase(remove(s.begin(), s.end(), ' '), s.end());
        regex b("[+-]?[0-9]+(.[0-9]+)?(e[+-]?[0-9]+(.[0-9]+)?)?");
        return regex_match(s,b);
    }

int main(){
	cout << isNumber("  15") << "\n";
}