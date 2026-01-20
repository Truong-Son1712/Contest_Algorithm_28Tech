#include<iostream>
#include<queue> 

using namespace std;

int main() 
{
	int n; cin>>n;
	priority_queue<int,vector<int>,greater<int> >pq;
	int a[n];
	for(int &x:a){
		cin>>x;
		pq.push(x);
	}
	long long res=0;
	while(pq.size()>1){
		long long a=pq.top();pq.pop();
		long long b=pq.top();pq.pop();
		res+=a+b;
		pq.push(a+b); 
	}
	cout<<res;
	return 0; 
}
