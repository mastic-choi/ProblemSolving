//백준 10870 : 피보나치 수5

#include<iostream>

using namespace std;

int fibo(int n);


int main(void){
    int n;
    cin >> n; // 입력받기
    cout << fibo(n) << endl;
}

int fibo(int n){
    if (n >= 2){
        return fibo(n-1) + fibo(n-2);
    }else if(n ==0){
        return 0;
    }else if (n ==1 ){
        return 1;
    }
}