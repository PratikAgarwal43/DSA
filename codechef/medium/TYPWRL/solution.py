t = int(input())
while(t>0):
    N, M = map(int, input().split())
    s= input()
    c = set(input())
    max_len = float('-inf')
    L=0
    R=0
    for i in s:
        if i in c:
            L+=1
            R=0
        else:
            R+=1
            L=0
        max_len = max(max_len,max(R,L))

    print(max_len)
    t-=1
