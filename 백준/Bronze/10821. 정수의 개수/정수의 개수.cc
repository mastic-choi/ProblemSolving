#include<iostream>
using namespace std;

int main(void){
    char s[101];
    cin >> s;
    int cnt = 0;

    for (int i = 0; i < 101; i ++){
        if (s[i] == ','){
            cnt += 1;
        }
    }
    cout << cnt + 1;


    return 0;
}
