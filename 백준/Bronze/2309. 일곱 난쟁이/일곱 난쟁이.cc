//백준 2309번: 일곱 난쟁이
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//합이 100이 되는걸 찾는게 아니라 그냥 전체 합구하고 2명을 선택해서 전체키에서 빼고 100이 되는지확인
int main(void){
    vector <int> key(9);
    int sumOfKey = 0;
    for (int i = 0; i < 9 ;i++){
        cin >> key[i];
        sumOfKey += key[i];
    }// 입력받기
    sort(key.begin(), key.end());
    // 2가지 선택하기
    int target_i = -1, target_j = -1;
    bool found = false;
    for (int i = 0; i < 9; i++){
        for (int j = i + 1; j < 9; j++){
            if (sumOfKey - (key[i] + key[j]) == 100){
                target_i = i;
                target_j = j;
                found = true;
                break; // 안쪽 루프 탈출
            }
        }
        if (found){
            break;
        }
    }
        if (target_i != -1) {
        // 동시에 제거한다.
            key.erase(key.begin() + target_j); 
            key.erase(key.begin() + target_i);
    }
    for (int i = 0; i < 7 ;i++){
        cout << key[i] << endl;
    }
}   