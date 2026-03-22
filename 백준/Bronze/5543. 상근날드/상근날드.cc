//백준 5542번 : 상근날드(SIUUUUU!)

#include<iostream>

using namespace std;

int main(void){
    int price[5];
    cin >> price[0];
    cin >> price[1];
    cin >> price[2];
    cin >> price[3];
    cin >> price[4];
    int result = price[0] + price[3];
    for (int i = 0; i <= 2; i ++){
        for (int j = 3;  j <= 4; j ++)
        if (result > price[i]+price[j]){
            result = price[i]+price[j];
        }else{
            continue;
        }
    }
    result = result - 50;
    cout << result << endl;
    return 0;
}