#include<iostream>
#include<stack> 

using namespace std;

int main() 
{
	string s; cin>>s;
	stack<char> st; 
	for(char x:s){
		if(st.empty()){
			st.push(x); 
		}else{
			if(st.top()=='('&&x==')') st.pop();
			else st.push(x); 
		} 
	}
	cout<<st.size()/2;
	return 0; 
}
