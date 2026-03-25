//백준 9076번 : 점수 집계
#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int myList[5];
        for(int i =0; i < 5; i++){
            cin >> myList[i];
        } //입력받기 끝.
        //정렬하기
        sort(myList, myList+5);
        if ((myList[3]- myList[1]) >= 4){
            cout << "KIN" << "\n";
        }
        else{
            int result = 0;
            for(int i = 1; i < 4; i++){
            result += myList[i];
        }
        cout << result << "\n";
        }
    }
}