#include<iostream> 
#include<algorithm> 
#include<string> 
using namespace std;

int F[105][105]; 
int main() 
{
	string s1,s2; cin>>s1>>s2;
	int n=s1.size(),m=s2.size();
	s1="0"+s1; s2="0"+s2; 
	for(int i=1;i<=n;i++) F[i][0]=i;
	for(int j=1;j<=m;j++) F[0][j]=j;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s1[i]!=s2[j]) F[i][j]=min({F[i-1][j],F[i][j-1],F[i][j]})+1;
			else F[i][j]=F[i-1][j-1]; 
		}
	} 
	cout<<F[n][m];
	return 0; 
}

 
