#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int rev(int x, int y);

int main(void){
    int x, y, result;
    cin >> x >> y;

    result = rev(x, y);
    cout<< result << endl;

    return 0;

}

int rev(int x, int y){
    string tmp_x, tmp_y, tmp_ans;
    int rev_x, rev_y, rev_ans;
    tmp_x = to_string(x);
    reverse(tmp_x.begin(), tmp_x.end());
    rev_x = stoi(tmp_x); //string to int 타입케스팅
    tmp_y = to_string(y);
    reverse(tmp_y.begin(), tmp_y.end());
    rev_y = stoi(tmp_y); //string to int 타입케스팅
    tmp_ans = to_string(rev_x + rev_y);
    reverse(tmp_ans.begin(), tmp_ans.end());
    rev_ans = stoi(tmp_ans); //string to int 타입케스팅
    return rev_ans;
}



//            reverse(str.begin(), str.end());