#include<bits/stdc++.h>
using namespace std;


void minimumBribes(vector<int> q) {
	int swaps =0;
	int size = q.size();
	for (int i=0;i<size;i++){  
        int key = q.at(i);
        if(q.at(i)-i-1>2){
        	cout << "Too chaotic\n";
        	return;
        }  
        int j = i - 1;
        while (j >= 0 && q.at(j)>key){  
            q.at(j+1) = q.at(j);  
            j--;
            swaps++;  
        }
        q.at(j+1) = key; 
    }  
	cout << swaps << "\n";
}

int main(){
	vector<int> v{2, 1, 5, 3, 4};
	minimumBribes(v);

}