#include<iostream>
#include<algorithm>
#include<vector> 

using namespace std;

class thoigian 
{
private:
    int gio,phut,giay;
public:
    friend istream& operator >>(istream& in,thoigian &x) {
        cin>>x.gio>>x.phut>>x.giay;
        return in; 
    }
    friend ostream& operator <<(ostream& out,thoigian x) {
        cout<<x.gio<<" "<<x.phut<<" "<<x.giay<<endl; 
        return out; 
    }
    friend bool operator < (thoigian a,thoigian b){
        if(a.gio!=b.gio) return a.gio<b.gio;
        else if(a.phut!=b.phut) return a.phut<b.phut;
        else return a.giay<b.giay; 
    } 
};
int main() 
{
    int n; cin>>n;
    thoigian a[n]; 
    for(int i=0;i<n;i++){
        thoigian x; cin>>x;
        a[i]=x;
    }
    sort(a,a+n);
   	for(int i=0;i<n;i++) cout<<a[i]; 
    return 0; 
}
