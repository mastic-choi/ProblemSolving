#include<iostream>
#include<string>

using namespace std;
char iscapital(char x);


int main(void){
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i <= n; i++){
        str[i] = iscapital(str[i]);
    }
    cout << str << endl;
    return 0;
}

char iscapital(char x){
    // 입력받은 char의 대문자인지 소문자인지 구분한다.
    if (x >= 'A' && x <= 'Z'){
        return x + 32;
    }else{
        return x - 32 ;
    }
}