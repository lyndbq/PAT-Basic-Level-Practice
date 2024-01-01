#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    int H[200] = {0};

    for(int i=0; i<B.size(); i++)
        H[B[i]]++;

    for(int i=0; i<A.size(); i++)
        H[A[i]]--;

    int ans = 0;
    for(int i=0; i<200; i++){
        if(H[i] > 0)
            ans += H[i];
    }

    if(ans == 0)
        cout << "Yes" << " " << A.size()-B.size();
    else
        cout << "No" << " " << ans;

}