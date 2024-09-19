num = int(input())

for x in range(1, num + 1):
    a, b = map(int, input().split())
    print("Case #" + str(x) + ":", a + b)