//백준 2587번:대표값2
#include<iostream>
#include<algorithm>

using namespace std;

//void insertion_sort(int list[4]);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[5];
    int ava = 0;
    for(int i = 0; i < 5; i ++){
        cin >> a[i];
        ava += a[i];
    }
    ava = ava/5;
    cout << ava << "\n";
    sort(a, a+5);
    //algorith의 sort를 사용하면 시간 초과가 발생한다. 라고 생각했는데 그냥 list index를 잘못선언했다/
    //삽입 정렬로 해보자
    // insertion_sort(a);
    
    cout << a[2] << "\n";

    return 0;
}


// void insertion_sort(int list[4]){
//     int key, j;
//     for(int i = 1; i < 5; i++){
//         key = list[i];

//         for(j = (i -1); j >= 0 && list[j]>key; j--){
//             list[j+1] = list[j];
//         }
//         list[j+1] = key;
//     }
// }
