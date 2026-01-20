#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s; cin>>s;
	int ans=0;
	int x,y; cin>>x>>y;
	int dem8=0,dem2=0;
	int l=0,r;
	for(r=0;r<s.size();r++){
		if(s[r]=='2') dem2++;
		else dem8++;
		while(dem2>x||dem8>y){
			if(s[l]=='2'){
				dem2--;
			}else{
				dem8--;
			}
			l++;
		}
		ans=max(ans,r-l+1);
	}
	cout<<ans;
	return 0;
}
