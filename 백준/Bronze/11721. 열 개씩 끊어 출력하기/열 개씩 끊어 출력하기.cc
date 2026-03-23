//백준 11721번: 열 개씩 끊어 출력하기

#include<iostream>
#include<string>

using namespace std;

int main(void){
    string my_str, result;
    getline(cin, my_str);
    int str_len = my_str.length();
    result = "";
    //string 사이에 \n 넣기 10의 배수마다
    for (int i = 0; i <= str_len; i++){
        if ((i % 10) == 0){
            result += my_str.substr(0, 10) ; 
            //substr은 원본 데이터를 수정하지 않고, 새로운 베열을 만든다/
            result += "\n"; //줄바꾸기 넣기
            my_str.erase(0,10);
        }
    }
    cout << result<< endl;
    return 0;

}