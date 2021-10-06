a, b = input().split(" ")

a = int(a, 2)

b = int(b, 2)


result = a + b


result_int = str(bin(result))

print(result_int[2:])
