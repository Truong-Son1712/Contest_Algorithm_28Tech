#include<iostream>
#include<string> 

using namespace std;

int main() 
{
	char c; cin>>c;
	if(c>=97&&c<=122){
		if(c!='z') cout<<(char)(c+1);
		else cout<<'a'; 
	}else{
		if(c!='Z') cout<<(char)(c+32+1);
		else cout<<'a'; 
	} 
	return 0; 
}
