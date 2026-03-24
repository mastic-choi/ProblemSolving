//백준 2953번: 나는 요리사다.

#include<iostream>
using namespace std;


int main(void){
    int num = 0;
    int score = 0;
    for (int i = 0; i < 5; i ++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int tmp_score = (a+b+c+d);
        if (tmp_score > score){
            score = tmp_score;
            num = i + 1;
        }
        
    }
    cout << num << " " << score << "\n";
    return 0;
}