//백준 5576번: 콘테스트

#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int w[10];
    int k[10];
    for (int i = 0; i <20; i ++){

        if (i < 10){
            cin >> w[i];
        }else{
            cin >> k[i - 10];
        }
    }//입력받기

    //정렬하기
    sort(w, w + 10, std::greater<int>());
    sort(k, k + 10, std::greater<int>());
    // cout << w[0] << endl;
    // cout << k[0] << endl;
    int result_k = 0; 
    int result_w = 0; 

    for (int j = 0; j < 3; j ++){
        result_w += w[j];
        result_k += k[j];
    }
    

    cout << result_w << " " << result_k << endl;

    return 0;



}