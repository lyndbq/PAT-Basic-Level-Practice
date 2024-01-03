#include<bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    int N;
    cin >> N;
    vector<int> H(10000, 0), K(N), C;

    for(int i=0; i<N; i++){
        cin >> K[i];
        int x = K[i];
        
        while(x != 1){
            // if(H[x] > 0)
            //     break;
            if(x % 2 == 0)
                x /= 2;
            else
                x = (3*x+1) / 2;
            H[x]++;
        }

    }
    sort(K.begin(), K.end(), cmp);

    for(int i=0; i<N; i++)
        if(!H[K[i]])
            C.push_back(K[i]);

    for(int i=0;i<C.size()-1; i++)
        cout << C[i] << " ";
    cout << C.back() << endl;

}