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
    vector<int> H(N);

    for(int i=0; i<N; i++)
        cin >> H[i];
    sort(H.begin(), H.end(), cmp);
    int MIN = 1e8, A, B;

    for(int i=1; i<=N; i++){
        if(N % i != 0)
            continue;
        if(MIN > abs(N/i - i)){
            A = i;
            B = N/i;
            MIN = B - A;
        }
    }
    
    if(A < B)
        swap(A, B);



    vector<vector<int> > K(A, vector<int>(B));

    int l_a = 0, l_b = 0, r_a = A-1, r_b = B-1, i = 0; 
    
    while(i < H.size()){
        if(l_b == r_b){
            for(int j=l_a; j<=r_a; i++,j++)
                K[j][l_b] = H[i];
        }else{
            for(int j=l_b; j<=r_b; i++, j++)
                K[l_a][j] = H[i];

            for(int j=l_a+1; j<=r_a; i++,j++)
                K[j][r_b] = H[i];

            for(int j=r_b-1; j>=l_b; i++,j--)
                K[r_a][j] = H[i];

            for(int j=r_a-1; j>=l_a+1; i++, j--)
                K[j][l_b] = H[i];
        }
        l_a++;
        l_b++;
        r_a--;
        r_b--;
    }

    for(int i=0; i<K.size(); i++){
        for(int j=0; j<K[0].size()-1; j++)
            cout << K[i][j] << " ";
        cout << K[i].back() << endl;
    }
}

