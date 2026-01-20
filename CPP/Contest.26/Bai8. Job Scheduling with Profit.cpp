#include<iostream>
#include<algorithm>
#include<queue> 
 
using namespace std; 

struct Job{
	int id,dl,pro; 
}; 
bool cmp(Job a,Job b) 
{
	return a.dl>b.dl; 
}
int main() 
{
	int n; cin>>n;
	Job a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].id>>a[i].dl>>a[i].pro; 
	} 
	sort(a,a+n,cmp);
	priority_queue<int> pq;
	int cur_d=a[0].dl;
	int idx=0;
	long long res=0;
	while(cur_d>=1){
		while(idx<n&&a[idx].dl>=cur_d){
			pq.push(a[idx].pro);
			idx++; 
		}
		if(!pq.empty())
		{
			res+=(long long)pq.top();
			pq.pop(); 
		 } 
		 cur_d--; 
	}
	cout<<res; 
}
