#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s;
	s+="@"; 
	int dem=1; 
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			dem++; 
		}else{
			cout<<s[i-1]<<dem;
			dem=1; 
		} 
	}
	return 0; 
}
