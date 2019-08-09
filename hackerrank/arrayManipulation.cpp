#include<bits/stdc++.h>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
    map<int,int> myMap;
    map<int,int>::iterator mapit;
    for(auto it:queries){
        int val = it.at(2);
        int a = it.at(0);
        int b = it.at(1);
        mapit = myMap.find(a);
        if(mapit == myMap.end()){
        	myMap.insert(make_pair(a,val));
        }else{
        	mapit->second += val;
        }

        mapit = myMap.find(b+1);
        if( mapit == myMap.end()){
        	myMap.insert(make_pair(b+1,-1*val));
        }else{
        	mapit->second -= val;
        }
    }
    long max = INT_MIN;
   	long sum =0;
   	for(auto it=myMap.begin();it!=myMap.end();it++){
   		sum+= (*it).second;
   		if(sum>max){
   			max = sum;
   		}
   	}
    return max;
}

int main(){
	vector<vector<int>> v{{29 ,40, 787},
{9 ,26 ,219},
{21 ,31, 214},
{8 ,22 ,719},
{15 ,23, 102},
{11 ,24 ,83},
{14, 22, 321},
{5 ,22, 300},
{11 ,30, 832},
{5 ,25 ,29},
{16 ,24, 577},
{3 ,10, 905},
{15 ,22, 335},
{29 ,35, 254},
{9 ,20, 20},
{33 ,34, 351},
{30 ,38, 564},
{11 ,31, 969},
{3 ,32, 11},
{29 ,35, 267},
{4 ,24, 531},
{1 ,38, 892},
{12 ,18, 825},
{25 ,32, 99},
{3 ,39, 107},
{12 ,37, 131},
{3 ,26 ,640},
{8, 39, 483},
{8 ,11, 194},
{12 ,37, 502}};
	cout << arrayManipulation(40,v);
}