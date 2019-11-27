a, b = map(int, input().split())
num1 = a + b
num2 = a - b
num3 = a * b

if num1 > num2:
    max = num1
else:
    max = num2

if max > num3:
    print(max)
else:
    print(num3)
