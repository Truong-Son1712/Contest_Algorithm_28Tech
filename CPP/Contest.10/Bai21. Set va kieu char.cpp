#include<iostream> 
#include<set>

using namespace std;

int main() 
{
	set<char> se;
	int n; cin>>n;
	for(int i=0; i<n;i++){
		char x; cin>>x;
		se.insert(x); 
	}
	cout<<se.size()<<endl; 
	for(auto x:se)
		cout<<x<<" ";
	cout<<endl;
	for(auto it=se.rbegin();it!=se.rend();it++)
		cout<<*it<<" ";
	return 0; 
}
