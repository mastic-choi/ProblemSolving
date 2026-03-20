#include<iostream>
#include<cstring>
using namespace std;

int main(void){
    string x;
    cin >> x;
    int n = x.length();
    int cnt = 0;
    for (int i = 0; i < n; i ++){

        if (x[i] == 'a' || x[i] == 'e' ||x[i] == 'i' ||x[i] == 'o' ||x[i] == 'u'){
            cnt += 1;
        }
    }
    cout << cnt<<endl;

    return 0;
}
