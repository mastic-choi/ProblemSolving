//백준 11170 : 0의 개수

#include<iostream>
#include<string>
#include <algorithm>
using namespace std;


int countingZero(int n, int m);

int main(void){
    //입력받기
    int t, n, m;
    int result = 0;
    cin >> t; //테스트 케이스의 수


    for (int i = 0; i < t; i++){
        cin >> n >> m;
        result = countingZero(n, m);
        cout << result<< endl;
    }
    return 0;
}



int countingZero(int n, int m){
    int result = 0;
    string check;

    for (int i = n ; i <= m ; i ++){ //n부터 시작해서 m까지 순차적으로 0의 존재유무를 확인한다.
        check = to_string(i);
        result += count(check.begin(), check.end(), '0');
    }

    return result;

}