#include<iostream>
#include<set>

using namespace std;

multiset<int> L,R;

void xoa(int num) 
{
	auto it=L.find(num); 
	if (it != L.end()) {
        L.erase(L.find(num));
    } else {
        R.erase(R.find(num));
    }
    
    if (L.size() > R.size() + 1) {
        R.insert(*L.rbegin());
        L.erase(--L.end());
    } else if (R.size() > L.size()) {
        L.insert(*R.begin());
        R.erase(R.begin());
    }
}
void insert(int num)
{
	 if (L.empty() || num <= *L.rbegin()) {
        L.insert(num);
    } else {
        R.insert(num);
    }
    
    if (L.size() > R.size() + 1) {
        R.insert(*L.rbegin());
        L.erase(--L.end());
    } else if (R.size() > L.size()) {
        L.insert(*R.begin());
        R.erase(R.begin());
    }
}
int getmedian()
{
	return *L.rbegin(); 
}
int main() 
{
	int n,k; cin>>n>>k;
	int a[n]; for(int &x:a) cin>>x;
	for(int i=0;i<k;i++){
		insert(a[i]); 
	} 
	for(int i=k;i<n;i++){
		cout<<getmedian()<<" ";
		insert(a[i]);
		xoa(a[i-k]); 
	} 
	cout<<getmedian();
	return 0; 
}
