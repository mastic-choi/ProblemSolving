#백준 3062번 / 수 뒤집기
import sys
input = sys.stdin.readline

def solution(x):
    listNum = list(str(x))
    reversedList = listNum[::-1]
    rvNum = int(''.join(reversedList))
    sumNum = rvNum + x
    sumList = list(str(sumNum))
    if sumList == sumList[::-1]:
        return "YES"
    else:
        return "NO"

T = int(input())
for _ in range(T):
    x = int(input())
    print(solution(x))