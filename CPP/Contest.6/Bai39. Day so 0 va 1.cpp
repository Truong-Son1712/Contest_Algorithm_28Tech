#include <iostream>
#include <vector>

using namespace std;

void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	 	cout<<a[i]<<" "; 
 } 
int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
	vector<int> luu1;
	vector<int> luu0; 
    int count_ones = 0;
    int count_zeros = 0;

    for (int i = 0; i < N; ++i) {
        if (arr[i] == 1) {
            int ones = 1;
            while (i + 1 < N && arr[i + 1] == 1) {
                ++ones;
                ++i;
            }
            luu1.push_back(ones) ;
            ++count_ones;
        } else {
            int zeros = 1;
            while (i + 1 < N && arr[i + 1] == 0) {
                ++zeros;
                ++i;
            }
            luu0.push_back(zeros); 
            ++count_zeros;
        }
    }
    if (count_ones == 0) {
        cout << "0";
    }
    else xuat(luu1); 
    cout << endl;

    if (count_zeros == 0) {
        cout << "0";
    }
  	else xuat(luu0);
    cout << endl;

    return 0;
}
