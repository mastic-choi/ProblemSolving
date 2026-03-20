#include<iostream>
#include <algorithm>
using namespace std;

int main(void){
    //입력 받기
    int a[3];
    for (int i = 0; i < 3; i ++){
        scanf(" %d", &a[i]);
    }
    sort(a, a + 3);
    for (int j = 0; j < 3 ; j ++){
        cout << a[j] << " ";
    }
    cout << endl;
    return 0;
}