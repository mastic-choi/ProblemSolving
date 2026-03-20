#include<map>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void CountingAlpha(string str);


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    str.resize(103);
    getline(cin, str); //입력받기 끝

    CountingAlpha(str);
    cout << endl;


}

void CountingAlpha(string str){
    std::map<char, int> mydic ={
    {'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0}, {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, {'z', 0}
    }; // dic 만들기
    int len = str.length();

    for (int i = 0; i <= len; i++){
        int value = mydic[str[i]];
        mydic[str[i]] = value + 1; //dic에서 찾기
    }// counting 끝
    
    for (auto const& [key, value] : mydic) {
        if (isalpha(key)){
            cout << value << " ";
        }
    }//출력
}