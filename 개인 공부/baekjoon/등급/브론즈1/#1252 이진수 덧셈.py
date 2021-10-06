a, b = input().split(" ")

c = ''
plus = 0

for i in range(1, min(len(a), len(b))+1):
    c_int = int(a[-i]) + int(b[-i]) + plus

    if c_int == 2 :
        c_int = 0
        plus = 1
    elif c_int == 3 :
        c_int = 1
        plus = 1
    else :
        plus = 0

    c = str(c_int) + c

    if i == len(b) :
        while plus == 1:
            i = i + 1
            c_int = int(a[-i]) + plus

            if c_int == 2:
                c_int = 0
                plus = 1

            else :
                plus = 0

        c = a[0:-i] + c


print(c)


#print("a[-i] : " + a[-i] + ", b[-i] : " + str(b[-i]))
#print("c_int : " + str(c_int) + ", plus : " + str(plus))
#print("c : " + c + ", i : " + str(i))
