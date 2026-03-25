// 백준 2822번 : 점수계산
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    vector <pair<int, int>> myVec(8);
    for(int i = 0; i < 8; i ++){
        cin >> myVec[i].first ; //첫번째 pair에 점수 넣기
        myVec[i].second = i + 1; // 두번째 pair에 index넣기
    }
    // 정렬하기
    sort(myVec.begin(), myVec.end(), greater<pair<int, int>>());

    int result = 0;
    int ind[5];
    for(int j = 0; j < 5; j ++){
        result += myVec[j].first;
        ind[j] = myVec[j].second;
    }
    sort(ind, ind+5);
    cout<< result << "\n";
    for (int k = 0; k < 5; k ++){
       cout <<  ind[k] << " ";
    }
    cout << "\n";
    return 0;
}