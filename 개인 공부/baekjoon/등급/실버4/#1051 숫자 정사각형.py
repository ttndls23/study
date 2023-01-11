hight, width = map(int, input().split());

num_arr = []

for _ in range(0, hight):
    num_arr.append(input());

result = []

def get_size(hight, width):
    for i in range(0, hight):
        for j in range(0, width):
            if (hight - i == 1) or (width-i == 1):
                result.append(1);

            for z in range(j + 1, width):
                if (num_arr[i][j] == num_arr[i][z]):
                    if ((i+z-j) > hight-1):
                        break;
                    if (num_arr[i][j] == num_arr[i+z-j][j]) and (num_arr[i][z] == num_arr[i+z-j][z]):
                        result.append((z-j+1)*(z-j+1));


get_size(hight, width);
print(max(result));
                    
        
