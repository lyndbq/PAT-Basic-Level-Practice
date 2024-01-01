#include<bits/stdc++.h>
using namespace std;

int main()
{
    string H[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum = 0;
    string S;
    cin >> S;

    for(int i=0; i<S.size(); i++)
        sum += S[i]-'0';
    
    int k = 1000;

    // S = to_string(sum);

    // for(int i=0; i<S.size()-1; i++)
    //     cout << H[S[i]-'0'] << " ";
    // cout << H[S.back() - '0'] << endl;

    while(sum / k == 0)
        k /= 10;

    while(k > 9){
        int x = sum / k;
        sum %= k;
        k /= 10;

        cout << H[x] << " ";
    }
    cout << H[sum] << endl;

    
}