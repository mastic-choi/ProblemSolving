//백준 17427번 : 약수의 합2
#include<iostream>
#include<vector>

using namespace std;
int sum_factor(int a);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
    cin >> c;
    long long result = 0;
    for (int i = 1; i < c+1; i++){
        // i가 약수로 등장하는 횟수(c/ i)에 i를 곱해서 더함
        result += (long long)i * (c / i);
        // c가 6이라 했을때 1은 총 4번 등장. 2는 총 2번 등장, 3은 총 1번 등장.... 이런식으로 연산한다.
    }
    cout << result << endl;
    return 0;
}
/**  해당 방식으로는 시간복잡도가 O(n^2)
int sum_factor(int a){
    // 잘 생각해보면, 약수는 본인을 제외하면 본인/2 보다 작은 값이다.
    // 그래서 a/2로 약수를 구해준뒤 본인을 더하면 약수이다.
    if (a == 1){
        return a;
    }
    int result = a;
    for (int i = 1; i <= (a/2); i ++ ){
        if((a)%i == 0){
            result += i;
        }
    }
    return result;
}
*/
//우리가 구해야하는건 1부터 x까지 모든 숫자의 약수 합을 다 더해라 임.