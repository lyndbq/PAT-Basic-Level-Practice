#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> H(10,0);
    for(int i=0,x; i<10; i++){
        cin >> x;
        H[i] = x;
    }

    if(H[0] > 0){
        for(int i=1; i<10; i++)
            if(H[i] > 0){
                cout << i;
                H[i]--;
                break;
            }
    }

    for(int i=0; i<10; i++)
        for(int j=0; j<H[i]; j++)
            cout << i;

}