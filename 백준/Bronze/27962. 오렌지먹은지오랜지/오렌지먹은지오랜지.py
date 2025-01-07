#백준 27962번 / 오랜지먹은지오랜지
import sys
input = sys.stdin.readline

n = int(input())
word = str(input())

check = 0
for q in range(1,n):
    l = word[:q]
    r = word[n-q:]

    cnt = 0
    for w in range(q):
        if l[w] != r[w]:
            cnt += 1

    if cnt == 1:
        check = 1
        break

if check == 1:
    print('YES')
else:
    print('NO')