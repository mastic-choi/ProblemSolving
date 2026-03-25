//백준 5054번: 주차의 신
#include<iostream>
#include<algorithm>
using namespace std;


int main(void){
    int t;
    cin >> t; //task case
    while(t--){
        // cout << t << "\n";
        int n;
        cin >> n;
        int x[n];
        for (int i = 0; i < n; i ++){
            cin >> x[i];
        }//입력받기 끝
        sort(x, x+n);
        // for (int w = 0; w < n; w++){
        //     cout << x[w] << " ";
        // }
        //각각의 차이를 모두 더하자
        int result = 0;
        for(int j = 0; j < n -1; j++){

            result += (x[j+1]- x[j]);
            // cout << result << " ";
        }
        result = result*2;
        cout << result << "\n";
    }
    return 0;
}

