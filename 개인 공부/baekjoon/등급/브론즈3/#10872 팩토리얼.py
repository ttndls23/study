num = int(input())


def factorial(num):

    if num == 2 :
        return 2 * 1
    else:
        return num * factorial(num-1)

if num == 0 or num == 1:
    print("1")
else:
    print(factorial(num))
