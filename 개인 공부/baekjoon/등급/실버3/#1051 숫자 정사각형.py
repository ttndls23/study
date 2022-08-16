hight, width = map(int, input().split());

num_arr = []

for _ in range(0, hight):
    num_arr.append(input());

result = []

def get_size(hight, width):
    for i in range(0, hight):
        for j in range(0, width):
            print(i, j);
            if (hight - i == 1) or (width-i == 1):
                result.append(1);

            for z in range(j + 1, width):
                print(z)
                if (num_arr[i][j] == num_arr[i][z]):
                    if (num_arr[i][j] == num_arr[i+z-j][j]) and (num_arr[i][z] == num_arr[i+z-j][z]):
                        result.append((j-z)*2);


get_size(hight, width);
print(result);
                    
        
