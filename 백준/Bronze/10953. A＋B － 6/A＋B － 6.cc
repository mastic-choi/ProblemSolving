#include<iostream>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        //입력 받기
        int a, b;
        char tmp;
        cin >> a >>tmp>>b;
        cout << (a+b) << endl;
    }



    return 0;
}
