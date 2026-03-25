//백준 5800번: 성적통계
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;


int main(void){
    int t;
    cin >> t;
    for (int i = 0; i<t; i++){
        int n;
        cin >> n;
        int a[n];
        for(int k = 0; k < n; k++){
            cin >> a[k];
        }
        sort(a, a+n);

        int largestGap = 0;
        for (int j =0; j < (n-1); j ++){
            int tmp = a[j];
            if((a[j+1] - tmp)>largestGap){
                largestGap = a[j+1] - tmp;
            }
        }
        printf("Class %d\n",(i+1));
        printf("Max %d, Min %d, Largest gap %d\n",a[n-1], a[0], largestGap);


    }
    return 0;
}