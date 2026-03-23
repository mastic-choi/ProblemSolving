//백준 11655번 : ROT13
#include<iostream>
#include<string>
using namespace std;

string rot13(string m);

int main(void){
    string mystring;
    getline(cin, mystring);
    cout << rot13(mystring) << "\n";

}

string rot13(string m){
    string result = "";
    int leng = m.length();
    for (int i = 0; i < leng; i ++){
        char c = m[i];
        if (c >= 'a' && c <= 'z') {
            result += (c - 'a' + 13) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            result += (c - 'A' + 13) % 26 + 'A';
        }
        else {
            result += c;
        }
    //    result += m[i] + 13;
    // 그냥 무식하게 + 13하면 안됩니다. 
    // z에 13을 더하면 대문자로 가는게 아니라 특수문자가 됩니다.
    }
    return result;
}
