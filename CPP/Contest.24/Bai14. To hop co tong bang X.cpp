#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
 
using namespace std;

int n,s,a[100], x[100];
vector<string> v; 

void ql(int i, int bd,int sum) 
{
	for(int j=bd; j<=n;j++) {
		if(sum+a[j]<=s){
			x[i]=a[j];
			if(sum+a[j]==s){
				string q="{";
				for(int u=1;u<=i;u++){
					q+=to_string(x[u])+" ";
				}	
				q.pop_back();
				q+="}"; 
				v.push_back(q); 
			}
			else ql(i+1,j,sum+a[j]); 
		} 
	}
}
int main() 
{
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i]; 
	sort(a+1,a+n+1); 
	ql(1,1,0);
	sort(v.begin(),v.end()); 
	for(auto x: v) {
		cout<<x<<endl; 
	}
	return 0; 
}
 
