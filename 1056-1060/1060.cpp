#include<bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    int N, MAX = 0;
    cin >> N;
    vector<int> H(N);
    for(int i=0; i<N; i++)
        cin >> H[i];
    sort(H.begin(), H.end(), cmp);

    for(int i=0; i<N; i++){
        if(i+1 < H[i])
            MAX = i+1;
        else
            break;
    }
    cout << MAX;
}