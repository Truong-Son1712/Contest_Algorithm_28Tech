#include<iostream>
#include<string>
#include<math.h> 
using namespace std; 

int n, k;
string s,res;
void Try(int i, string str,int cnt) 
{
	if(cnt>k||i>n) return;
	res=max(res,str);
	char maxval=str[i];
	for(int j=i+1;j<=n;j++) 
	{
		maxval=max(maxval,str[j]); 
	}
	if(maxval==str[i]) Try(i+1,str,cnt);
	else{
		for(int j=i+1;j<=n;j++){
			if(str[j]==maxval){
				string tmp=str;
				swap(tmp[i],tmp[j]);
				Try(i+1,tmp,cnt+1); 
			} 
		} 
	} 
}
int main() 
{
	cin>>k>>s;
	n=s.size() ;
	s="0"+s; 
	res=s;
	Try(1,s,0);
	cout<<res.substr(1);
	return 0; 
}
