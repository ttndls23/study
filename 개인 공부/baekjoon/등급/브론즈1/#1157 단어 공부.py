word = input()

count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for i in word:
    i = i.upper()
    
    count[ord(i)-65] = count[ord(i)-65] + 1

#    print(ord(i)-65)

max_alp = ''
max_num_count = 0

for i in range(len(count)):
    if(count[i] == max(count)) :
        max_num_count = max_num_count + 1
        max_alp = chr(i+65) 
        
if (max_num_count >= 2):
    print("?")
else:
    print(max_alp)
