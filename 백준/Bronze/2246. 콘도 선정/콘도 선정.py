#백준 2246번 / 콘도 선정
import sys
input = sys.stdin.readline

#0. 입력받기
T = int(input())
condos = []
for _ in range(T):
    l, p = map(int, input().split())
    condos.append([l, p])
condos.sort()
#1. 해결하기
cost = 10001
result = 0
for i in condos:
    temp = i[1]
    if temp < cost:
        cost = temp
        result += 1
#2. 출력하기
print(result)