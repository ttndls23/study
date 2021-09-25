x1, y1 = input().split(" ")
x2, y2 = input().split(" ")
x3, y3 = input().split(" ")

x_move = []
y_move = []

x1 = int(x1)
x2 = int(x2)
x3 = int(x3)
y1 = int(y1)
y2 = int(y2)
y3 = int(y3)


if(abs(x2 - x1) == abs(x3 - x2)) and (abs(y2 - y1) == abs(y3 - y2)):
    print("0")
else:
    if(x1 > x2):
        if (y2 > y3):
            print("1")
        else:
            print("-1")
    else:
        if (y2 > y3):
            print("-1")
        else:
            print("1")

                  


#for (i = 0; i < 2; i++):
    
#    if (i != 0):
#        x1 = x2
#        x2 = x3
#        y1 = y2
#        y2 = y3

#    if (x1 > x2):
#        x_move.append(-1)
#    else if (x1 < x2):
#        x_move.append(1)
#    else:
#        x_move.append(0)

        
#    if (y1 > y2):
#        y_move.append(-1)
#    else if(y1 < y2):
#        y_move.append(1)
#    else:
#        y_move.append(0)


#if (
    
