#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string str;
    str.resize(500);
    while (true){
        getline(cin, str);//입력받기
        if (str.compare("END")!=0){ //string compare시 동일한 값이 입력되면 0 return
            reverse(str.begin(), str.end());
            cout << str << endl;

        }else if (str.compare("END")==0){
            break;
        }


    }
    return 0;
}
