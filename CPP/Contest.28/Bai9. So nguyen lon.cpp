#include<iostream> 
#include<string> 

using namespace std; 

int F[1001][1001]; 
int main() 
{
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.size(); int m=s2.size();
	s1="@"+s1;
	s2="@"+s2; 
	F[0][0]=0; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) {
			if(s1[i]==s2[j]){
				F[i][j]=F[i-1][j-1]+1; 
			}else{
				F[i][j]=max(F[i-1][j],F[i][j-1]); 
			} 
		}
	}
	cout<<F[n][m];
	return 0; 
}
