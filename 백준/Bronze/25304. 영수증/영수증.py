num = int(input())
ea = int(input())
result = int(0)

for x in range(1, ea + 1):
    a, b = map(int,input().split())
    result += a * b
    
if num == result:
    print("Yes")
else:
    print("No")