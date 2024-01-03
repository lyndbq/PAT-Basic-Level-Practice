#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, p, MAX = 0;
    cin >> N >> p;

    vector<long long> H(N);
    for(int i=0; i<N; i++)
        cin >> H[i];

    sort(H.begin(), H.end());
    
    for(long long i=0, x; i<N; i++){
        x = H[i] * p;
        int k = lower_bound(H.begin(), H.end(), x) - H.begin();
        if(H[k] != x)
            k = k - i;
        else
            k = k - i + 1;
        MAX = max(MAX, k);
    }
    cout << MAX;
}