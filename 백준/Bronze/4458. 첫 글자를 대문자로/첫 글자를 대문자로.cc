#include<iostream>
#include<string>

using namespace std;
char changeCap(char x);
void checkStarting(void);

int main(void){
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++){
        string str;
        getline(cin, str); //입력 받고
        str[0] = changeCap(str[0]);
        cout << str << endl;
    }


}

char changeCap(char x){
    if (x >= 'A' && x <= 'Z'){
        return x;
    }else{
        return x - 32 ; //소문자 -> 대문자
    }
}