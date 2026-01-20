#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<algorithm> 

using namespace std;

bool cmp(pair<string,int> a,pair<string,int>b) 
{
    if(a.first.size()!=b.first.size()) return a.first.size()>b.first.size();
    else return a.first>b.first; 
}
int main() 
{
    	string s1,s2;
		getline(cin,s1);getline(cin,s2);
		for(int i=0;i<s2.size();i++){
			if(s2[i]=='+'){
				s2.erase(i-1,1);
				i--; 
			} 
		} 
		s2.erase(s2.size()-1,1); 
        string s=s1+" + "+s2;
        //cout<<s1<<endl<<s2<<endl<<s<<endl; 
        string t=s, d=s; 
        while(t.find("x")!=string::npos){
            int pos=t.find("x");
            while(t[pos]!=' '){
                pos++; 
            } 
            t.erase(t.find("x"),pos-t.find("x")); 
        }
        int cs;
        for(int i=0;i<d.size();i++){
            if(d[i]=='x'){
                cs=i;
                break; 
            }
        } 
        d.erase(0,cs+1); 
        while(d.find("x")!=string::npos){
            int pos=d.find("x");
            while(d[pos]!=' '){
                pos--; 
            } 
            d.erase(pos,d.find("x")-pos+1);
        }  
        stringstream tt(t),dd(d); 
        string world;
        vector<int> v1;
        vector<string> v2; 
        while(getline(tt,world,'+')){
            v1.push_back(stoi(world));
        } 
        while(getline(dd,world,'+')){
            v2.push_back(world); 
        } 
        for(int i=0;i<v2.size();i++)
            v2[i]="x"+v2[i];
        v2[v2.size()-1]+=' ';
        //for(int i=0;i<v1.size();i++) cout<<v1[i]<<" "; 
        //cout<<endl;
        //for(int i=0;i<v2.size();i++) cout<<v2[i]<<" ";
        //cout<<endl; 
        map<string,int> mp;
        for(int i=0;i<v2.size();i++){
            if(mp.count(v2[i])==0) mp.insert({v2[i],v1[i]});
            else mp[v2[i]]+=v1[i]; 
        } 
        vector<pair<string,int> >luu;
        for(auto x:mp) luu.push_back({x.first,x.second});
        sort(luu.begin(),luu.end(),cmp);
        for(int i=0;i<luu.size()-1;i++){
            cout<<luu[i].second<<luu[i].first<<'+'<<" ";
        } 
        cout<<luu[luu.size()-1].second<<luu[luu.size()-1].first; 
}
