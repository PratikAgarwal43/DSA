t = int(input())
while(t>0):
    n = int(input())
    s=input().strip()
    x =  s.count('R') - s.count('L')
    y = s.count('U') - s.count('D')
    is_possible = False
    if x== 0 and y ==2 and s.count('U') > 0:
        is_possible = True
    elif x== 0 and y == -2 and s.count('D') > 0:
        is_possible = True
    elif x== 2 and y == 0 and s.count('R') > 0:
        is_possible = True
    elif x== -2 and y == 0 and s.count('L') > 0:
        is_possible = True
    t-=1
    print("YES" if is_possible else "NO")

