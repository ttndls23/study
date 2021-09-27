word = input()

count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for i in word:
    i = i.upper()
    
    count[ord(i)-65] = count[ord(i)-65] + 1

    print(ord(i)-65)

max_num = 0
max_alp = ''

for i in range(len(count)):
    if(count[i] > max_num) :
        max_alp = chr(i+65)
    else if(count[i] = max_num):
        
