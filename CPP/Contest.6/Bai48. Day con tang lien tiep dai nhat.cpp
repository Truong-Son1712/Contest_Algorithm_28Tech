#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case) {
        int N;
        cin >> N;
		vector<int> luu; 
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int max_length = 0;
        int current_length = 1;
        int start_index = 0;

        for (int i = 1; i < N; ++i) {
            if (A[i] > A[i - 1]) {
                ++current_length;
            } else {
                if (current_length >= max_length) {
                	if(current_length > max_length)
						luu.clear(); 
                    max_length = current_length;
                    start_index = i - current_length;
                    luu.push_back(start_index); 
                }
                current_length = 1;
            }
        }

        if (current_length >= max_length) {
        	if(current_length > max_length)
				luu.clear();
            max_length = current_length;
            start_index = N - current_length; 
            luu.push_back(start_index) ;
        }

        cout << "Test #" << test_case << " :" << endl;
        cout << max_length << endl;
        for(int i=0;i<luu.size();i++){
			for(int j=luu[i];j<luu[i]+max_length;j++)
				cout<< A[j]<<" "; 
			cout<<endl; 
		}
        
    }

    return 0;
}
