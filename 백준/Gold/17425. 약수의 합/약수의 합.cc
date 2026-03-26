//백준 17425번 : 약수의 합
#include<iostream>
#include<vector>

using namespace std;
long long f[1000001];
long long g[1000001];


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= 1000000 ; i++){
        for (int j = i; j <= 1000000; j += i){
            f[j] += i;
        }
    }
    for (int i = 1; i <= 1000000; i++) {
        g[i] = g[i - 1] + f[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        cout << g[c] << "\n";
    }
    
    
    return 0;
}
