//백준 1427번: 소트인사이드
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void){
    string tmp;
    getline(cin, tmp);
    int sizeOfTmp = tmp.size();
    int x[sizeOfTmp];
    for(int i = 0; i < sizeOfTmp; i++){
        x[i] = tmp[i] - '0';
    } //입력을 한 줄씩 끊어서 받는다.
    sort(x, x+sizeOfTmp, greater<int>()); //내림차순 정렬
    for(int j = 0; j < sizeOfTmp; j++){
        cout <<  x[j];
    }
    cout << endl;
    return 0;
}