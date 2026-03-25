//백준 3058번: 짝수를 찾아라

#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int mix_score = 101;
        int result = 0;
        int tmp;
        for (int j = 0; j < 7; j++){
            cin >> tmp;
            if (tmp%2 == 0){
                result += tmp;
                if (mix_score > tmp){
                    mix_score = tmp;
                }
            }
        }
        cout << result << " " << mix_score << "\n";
    }
    return 0;
}