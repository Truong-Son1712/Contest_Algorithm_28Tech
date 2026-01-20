#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip> 

using namespace std;

class hocsinh 
{
private: 
    string ma, ten, xl;
    double d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,tbc; 
public:
    friend istream& operator >>(istream& in,hocsinh &x){
        scanf("\n");getline(cin,x.ten); cin>>x.d1>>x.d2>>x.d3>>x.d4>>x.d5>>x.d6>>x.d7>>x.d8>>x.d9>>x.d10; 
        x.tbc= (x.d1+x.d2+x.d3+x.d4+x.d5+x.d6+x.d7+x.d8+x.d9+x.d10)/10;
        if(x.tbc>=9) x.xl="XUAT SAC";
        else if(x.tbc>=8) x.xl="GIOI";
        else if(x.tbc>=7) x.xl="KHA";
        else if(x.tbc>=5) x.xl="TB";
        else x.xl="YEU"; 
        return in; 
    } 
    friend ostream& operator <<(ostream& out,hocsinh x){
        cout<<x.ma<<" "<<x.ten<<" "<<fixed<<setprecision(1)<<x.tbc<<" "<<x.xl<<endl; 
        return out; 
    } 
    void setma(int i){
        string tt=to_string(i);
        if(tt.size()==1) ma="HS0"+tt;
        else ma="HS"+tt; 
    } 
    friend bool operator < (hocsinh a,hocsinh b){
        if(a.tbc!=b.tbc) return a.tbc>b.tbc;
        else return a.ma<b.ma; 
    } 
};
int main() 
{
    int n; cin>>n;
    hocsinh a[n];
    for(int i=0;i<n;i++){
        hocsinh x; cin>>x;
        x.setma(i+1);
        a[i]=x; 
    } 
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i];
    return 0; 
}
