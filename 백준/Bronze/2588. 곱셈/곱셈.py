a = input()
b = input()

print(int(a) * (int(b) % 10))
print(int(a) * ((int(b) // 10) % 10))
print(int(a) * (int(b) // 100))
print(int(a) * int(b))