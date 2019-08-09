
#include<bits/stdc++.h>
using namespace std;

template<typename T>
void print (T t) {
	for (const auto& e : t) cout << e << " ";
	cout << endl;}

int main(){
	// deque<int> d{1,2,3,4};
	// cout << d.front() << "\n";
	// cout << d.back() << "\n";
	// print(d);

	// forward_list<int> fl{1,1,2,3,4,5};
	// fl.pop_front();
	// fl.push_front(1);
	// fl.clear();
	// fl.unique();
	// fl.insert_after(fl.begin(),6);
	// fl.sort();
	// print(fl);

	// list<int> l{1,2,3,4,9,7};
	// list<int> li{11,56,34};
	// l.push_front(0);
	// l.push_back(12);
	// l.sort();
	// li.sort();
	// l.merge(li);
	// print(l);

	// set<int> s{1,2,3,4,5,6,1,3};
	// int numBIg4 = count_if(s.begin(),s.end(),[](int i){return i>4;});

	// multiset<int> s{1,2,3,4,5,6,1,3};
	// print(s);

	// unordered_set<int> s{1,2,3,4,5};
	// s.erase(5);
	// print(s);

	// stack<int> s;
	// s.push(1);
	// s.push(3);
	// s.push(4);
	// int a = s.top();
	// cout << a <<"\n";

	// queue<int> q;
	// q.push(5);
	// q.push(4);
	// q.push(3);
	// cout << q.front() << "\n";
	// cout << q.back() << "\n";


	// priority_queue<int,vector<int>,greater<int>> pq;
	// pq.push(1);
	// pq.push(5);
	// pq.push(7);
	// pq.push(0);
	// cout << pq.top();

	 vector<int> v{3,4,5,2,4,8,10,1,45,46};
	// cout << boolalpha<<binary_search(v.begin(),v.end(),49);
	 int a = count_if(v.begin(),v.end(),[](auto i){return !(i&1);});
	 cout << a;

}