// 백준 2592번: 대표값

#include<iostream>
#include <algorithm>

using namespace std;


int ava(int x[10]);
int countingArray(int x[10]);

int main(void){
    //입력받기
    int x[10];
    for (int i = 0; i < 10; i++){
        cin >> x[i];
    }

    cout << ava(x)<< "\n";
    cout << countingArray(x) << "\n";
    return 0;
}

int ava(int x[10]){
    int result = 0;

    for (int i = 0; i < 10; i++){
        result += x[i];
    }
    return (result/10);
}

int countingArray(int x[10]){
    //데이터를 읽으면서, 그 데이터 숫자 자체를 '아파트의 호수(인덱스)'로 취급합니다. 
    // 예를 들어 숫자 5를 읽었다면 아파트 5호로 가서 카운트를 1 올립니다.
    //문제는 자연수를 1000보다 작은 10의 자연수로 줬다. 인덱스는 본인 나누기 10으로 해서 할당하자
    int counting[100] ={0};//100개의 방을 만들고 그 안에 0으로 채운다.
    for (int i = 0; i < 10; i++){
        int j = (x[i])/10;
        counting[j] += 1; //1을 늘려준다.
    }
    int c = 0; //couting된 값
    int indx = 0; //그 인덱스
    for (int z = 0; z <= 100; z++){
        if(counting[z]>= c){
            c = counting[z];
            indx = z;
        }else{
            continue;
        }
    }
    return (indx * 10);
}
