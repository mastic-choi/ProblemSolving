//백준 11944번

#include<iostream>
#include<string>
using namespace std;
int digitNumber(int n, int m);

int main(void){
    int n, m;
    cin >> n >> m; 
    string str_num = to_string(n);
    string result = "";

    for (int i = 0; i < n; i++){
        result += str_num ;
    }

    if (result.size() > m){
        cout << result.substr(0, m);
    }
    else{
        cout << result << endl;
    }




}
/* to_string으로 typecasting 해주면 쉽게 해결가능함.
int digitNumber(int n, int m)
{
    //N이 몇자리 수인지 확인한다.
    int cnt = 0 ;
    int num = n;
    while (num>0)
    {
        num = num / 10;
        cnt += 1;
    }
    int cout = n*cnt; //ex) 20을 20번 출력 -> 2자리*20번

    if (cout >= m){

        return m;
    }else{
        return cnt;
    }
}*/