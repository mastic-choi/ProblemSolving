//백준 5176번 : 대회자리
#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int p, m; //p는 참가자 수, m은 자리 수
        cin >> p >> m;
        int result = 0;
        vector<int> place(m+1, 0);
        for (int i = 0; i<p; i++){
            int tmp;
            cin >> tmp;
            if (place[tmp] == 0){
                place[tmp] = 1; 
            }else{
                result += 1;
            }
        }
        cout << result << "\n";
    }
}