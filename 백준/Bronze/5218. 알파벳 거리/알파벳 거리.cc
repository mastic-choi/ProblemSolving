//백준 5218번: 알파벳 거리

#include<iostream>
#include<string>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string a, b;
        cin >> a >> b; //입력받기


        cout << "Distances: ";
        for (int j = 0; j < a.size(); j ++){
            int dis = 0;
            if (b[j] >= a[j]){
                dis = b[j] - a[j];
                
            }else {
                dis = (b[j] + 26) - a[j];

            }
            cout << dis << " ";



        }
        cout <<"\n";

    }

    return 0 ;
}