#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(void){
    int num_n;
    cin >> num_n;
    vector<int> vec;
    for(int i = 0; i < num_n; i++){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());
    int answer = vec[0] * vec[num_n-1];
    cout << answer << "\n";
    return 0;
}