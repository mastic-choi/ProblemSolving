#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int myList[10];
        for (int i = 0; i < 10; i++){
            cin >> myList[i];
        }
        sort(myList, myList+10, greater<int>());
        // for (int i = 0; i < 8; i++){
        //     cout << myList[i] << "\n";
        // }
        cout << myList[2] << "\n";
    }
}