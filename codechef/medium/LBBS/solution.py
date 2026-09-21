s = input().strip()
k = int(input().strip())
n = len(s)
max_len = 0
for i in range(n):
    zero = 0
    one = 0
    for j in range(i, n):
        if s[j] == '0':
            zero += 1
        else:
            one += 1
        length = j - i + 1
        diff = abs(zero - one)
        if length % 2 == 0 and diff <= 2 * k:
            max_len = max(max_len, length)

print(max_len)