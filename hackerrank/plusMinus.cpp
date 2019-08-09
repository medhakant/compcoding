#include<bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
    int pos=0,neg=0,zero=0;
    for(int i:arr){
        if(i>0){
            pos++;
        }else if(i<0){
            neg++;
        }else{
            zero++;
        }
    }
    float total = (pos+neg+zero)*1.0;
    cout << pos/total << "\n";
    cout << neg/total << "\n";
    cout << zero/total << "\n";

}

int main(){
	vector<int> v{-4,3,-9,0,4,1};
	plusMinus(v);
}