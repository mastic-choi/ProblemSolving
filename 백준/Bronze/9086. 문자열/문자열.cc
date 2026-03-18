#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void runCal(void);

int main(void){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        runCal();
    }
    return 0;
}
void runCal(void){
    char tmp[100];
    scanf("%s", &tmp);
    int n = strlen(tmp);

    printf("%c%c\n",tmp[0],tmp[n-1]);
}
