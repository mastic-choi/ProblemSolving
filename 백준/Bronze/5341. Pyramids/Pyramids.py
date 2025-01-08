#백준 5341번 / Pyramids
import sys
input = sys.stdin.readline

def cal(n):
    answr = 0
    for i in range(1, n+1):
        answr += i
    return answr

while True:
    n = int(input())
    if n == 0:
        break
    print(cal(n))
