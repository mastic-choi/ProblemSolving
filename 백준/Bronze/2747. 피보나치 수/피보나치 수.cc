//백준 2747 : 피보나치 수

#include<iostream>

using namespace std;



int main(void){
    int n;
    cin >> n;
    if (n == 0) {
            cout << 0 << "\n";
            return 0;
        }

    int fibo[46]; // n은 최대 20이므로 결과를 저장할 배열 생성
    fibo[0] = 0;
    fibo[1] = 1;

    // 반복문을 통해 앞에서부터 순차적으로 더해나감 (중복 계산 없음)
    for (int i = 2; i <= n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    cout << fibo[n] << "\n";
    return 0;
}