hight, width = input().split()

arr = []
result = []

for i in range(0, int(hight)):
    arr.append(input());

for i in range(0, int(hight)-7):
    temp = []
    for j in range(0, int(width)-7):
        count = 0
        first = arr[i][j];
        first_reverse = 'W' if first == 'B' else 'B';
        reverse_count = 1;

        for k in range(0, 8):
            for p in range(0, 8):
                if (k == 0 and p == 0):
                    continue;
                
                if (k % 2 == 0) and (p % 2 == 0):
                    if (first != arr[i+k][j+p]):
                        count += 1;
                    else :
                        reverse_count += 1;
                        
                elif (k % 2 != 0) and (p % 2 != 0) :
                    if (first != arr[i+k][j+p]):
                        count += 1;
                    else :
                        reverse_count += 1;

                else :
                    if (first == arr[i+k][j+p]):
                        count += 1;
                    else :
                        reverse_count += 1;

                

        temp.append(count if count <= reverse_count else reverse_count);

    result.append(min(temp));

print(min(result))
                    

        
