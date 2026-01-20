#include<iostream>
#include<vector>
#include<algorithm> 
#include<cstring> 

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) 
{
	return a.second-a.first>b.second-b.first; 
}
bool F[1001][1001]; 
int main() 
{
	string s; cin>>s; 
	s="@"+s; 
	int n=s.size(); 
	n--; 
	memset(F,0,sizeof(F)); 
	for(int i=1;i<=n;i++) F[i][i]=true;
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n-k;i++){
			int j=i+k;
			if(s[i]==s[j]){
				if(k==1) F[i][j]=true;
				else{
					F[i][j]=F[i+1][j-1]; 
				} 
			} 
		} 
	} 
	vector<pair<int,int> >v;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(F[i][j]==true) 
			{
				v.push_back({i,j});
				/*for(int h=i;h<=j;h++){
					cout<<s[h]; 
				} 
				cout<<endl; */
			}
		} 
	} 
	sort(v.begin(),v.end(),cmp) ;
	cout<<v[0].second-v[0].first+1; 
	return 0; 
}
