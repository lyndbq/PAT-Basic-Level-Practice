#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> H(N), K(N, 0);
	for(int i=0; i<N; i++)
		cin >> H[i];
	K[N-1] = 200;
	for(int i=N-2; i>=0; i--){
		if(H[i] == H[i+1])
			K[i] = K[i+1];
		else if(H[i] > H[i+1])
			K[i] = K[i+1] + 100;
		else{
			K[i] = 200;
		}  
	}
	long long sum = K[0];
	for(int i=1; i<H.size(); i++){
		if(H[i] > H[i-1] && K[i] <= K[i-1])
			K[i] = K[i-1] + 100;
		else if(H[i] == H[i-1])
			K[i] = K[i-1];
		sum += K[i];
	}
	cout << sum << endl;
	// for(auto i : K)
	// 	cout << i << " ";
}
