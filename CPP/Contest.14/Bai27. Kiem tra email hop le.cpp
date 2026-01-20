#include<iostream>
#include<string>

using namespace std;

bool check(string s) 
{
	string duoi=s.substr(s.find("@"));
	if(duoi!="@gmail.com"&&duoi!="@28tech.com.vn"&&duoi!="@yahoo.com"&&duoi!="@hotmail.com") return false;
	for(int i=0;i<s.size();i++){
		if((s[i]<'0'||s[i]>'9')&&(s[i]<'A'||s[i]>'Z')&&(s[i]<'a'||s[i]>'z')&&(s[i]!='@')&&(s[i]!='.')&&(s[i]!='_')) 
			return false; 
	} 
	int dem=0;
	for(int i=0;i<s.size();i++)
		if(s[i]=='@') dem++;
	if(dem!=1) return false;
	return true; 
}
int main() 
{
	int T; cin>>T;
	cin.ignore(1); 
	while(T--){
		string s; getline(cin,s);
		if(check(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	} 
	return 0; 
}
