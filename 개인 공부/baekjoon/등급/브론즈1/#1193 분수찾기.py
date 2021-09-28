num = int(input())

num_array = [[0,0] for _ in range(num)]


for i in range(1, num+1):
    if i == 1 :
        num_array[i-1] = 1,1
        before_x = 1
        before_y = 1
        x_time = 1
        y_time = 2
        count_x = 1
        count_y = 1
        x = 1
        y = 1
        plus = 0
        count_side = 1
        count_max = 1
        
    else: 
        if i == before_x + x_time :
            y = y + 1
            num_array[i-1] = 1, y
            before_x = before_x + x_time
        
            if x_time == 1:
                x_time = 4 * count_x
                count_x = count_x + 1
            else :
                x_time = 1

        elif i == before_y + y_time:
            x = x + 1
            num_array[i-1] = x, 1
            before_y = before_y + y_time

            if y_time == 1:
                y_time = 2 + (4 * count_y)
                count_y = count_y + 1
            else :
                y_time = 1
#            print("before_y : "+str(before_y), "y_time : " +str(y_time))
        else :
            if plus == 0:
                num_array[i-1] = num_array[i-2][0]-1, num_array[i-2][1]+1

                if count_max == count_side :
                    count_max = count_max + 1
                    count_side = 1
                    plus = 1
                else :
                    count_side = count_side + 1
            else :
                num_array[i-1] = num_array[i-2][0]+1, num_array[i-2][1]-1
                if count_max == count_side :
                    count_max = count_max + 1
                    count_side = 1
                    plus = 0
                else :
                    count_side = count_side + 1   

print(str(num_array[num-1][0])+"/"+str(num_array[num-1][1]))
            
        
    
