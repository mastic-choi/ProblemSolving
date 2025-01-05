# 백준 11874번 / ZAMKA
import sys
input = sys.stdin.readline
L = int(input())
D = int(input())
X = int(input())

for i in range(L, D+1):
    if sum(map(int, list(str(i)))) == X:
        print(i)
        break

for i in range(D, L-1, -1):
    if sum(map(int, list(str(i)))) == X:
        print(i)
        break