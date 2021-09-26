num = int(input())

a = []

zeroandone = [[1, 0], [0, 1]]


for i in range(num):
    a = int(input())

    if (a >= 2):
        for j in range(2, a+1):
            zeroandone.append([])
            zeroandone[j].append(zeroandone[j-2][0]+zeroandone[j-1][0])
            zeroandone[j].append(zeroandone[j-2][1]+zeroandone[j-1][1])

    print(str(zeroandone[a][0]) + " " + str(zeroandone[a][1]))

    
            

