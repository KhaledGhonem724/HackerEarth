
#include<bits//stdc++.h>
using namespace std;
int solve (int N, vector<int> A) {
    unordered_set<int>st;
    int maxi=A[0];
    for (int i=0;i<N;i++){
        st.insert(A[i]);
        maxi= max(maxi,A[i]);
    }
    if(st.size()>2){
        return -1;
    }else{
        return maxi;
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(N, A);
        cout << out_;
        cout << "
";
    }
}
