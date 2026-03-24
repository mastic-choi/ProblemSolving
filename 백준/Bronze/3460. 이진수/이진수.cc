//백준 1292번: 쉽게 푸는 문제
#include<iostream>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int digit = 0;
        while (a>0){
            if (a%2 != 0){
                cout << digit << " ";
            }
            a = a / 2;
            digit ++;
        }
    }
    return 0;
}