#include<iostream>
#include<string>

using namespace std;


int main(void){
    string my_str;
    getline(cin, my_str); //입력받기

    string result = "";
    for (int i = 0; i <= my_str.length(); i++){
        if (i == 0){
            result += my_str[i];
        }else if(my_str[i] == '-'){
            result += my_str[i+1];
        }
    }
    cout << result << "\n";
}