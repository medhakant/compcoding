#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


int main(){
	int arr[] = {1,2,4,2,7,9,10,4,7};
	cout << *max_element(arr,arr+9);
}