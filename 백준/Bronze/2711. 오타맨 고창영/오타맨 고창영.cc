// 백준 2711번: 오타맨 고창영
#include<iostream>
#include<string>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int i = 0; i < t; i ++){
        int idx;
        string my_string;
        cin >> idx >> my_string;
        my_string.erase(my_string.begin() + idx - 1);

        cout << my_string << "\n";

    }
}