#include<bits/stdc++.h>
using namespace std;

// 18

int main()
{
    int N, k, x;
    cin >> N >> k >> x;
    vector<vector<int> > H(N, vector<int>(N));
    for(int i=0, s, ans, z, t = 0; i<N; i++){
        ans = 0;

        // 判断偏移量为多少
        if(i % 2)
            z = 0;
        else{
            t++;
            if(t > k)
                t = 1;
            z = t;
        }

        // 先将偏移后空出的部分赋值为x
        for(int j=0; j<z; j++)
            H[i][j] = x;

        // 之后读入并保存偏移部分
        for(int j=z; j<N; j++)
            cin >> H[i][j];
        
        // 将偏移后多出来的部分，只读入，不保存
        for(int j=0; j<z; j++)
            cin >> s;        
    }


    vector<int> M;

    // 一列一列的加，并将没列的和记录
    for(int i=0, ans; i<N; i++){
        ans = 0;
        for(int j=0; j<N; j++){
            ans += H[j][i];
        }
        M.push_back(ans);
    }

    // 输出没列的和，因为PTA对输出格式要求很严格，所以我们最后不能以空格结尾
    for(int i=0; i<M.size()-1; i++)
        cout << M[i] << " ";
    cout << M.back();
    
}