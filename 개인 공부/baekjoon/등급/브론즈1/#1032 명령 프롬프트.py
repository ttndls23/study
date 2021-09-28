num = int(input())

string = []

final_string = ''

if num == 1 :
    print(input())
    
else :
    for i in range(num):
        string.append(input())

    for i in range(len(string[0])):
        for j in range(len(string)-1):

            if (string[j][i] != string[j+1][i]):
                final_string = final_string + "?"
                break
            else :
                if (j == len(string)-2) :
                    final_string = final_string + string[j][i]
    
    print(final_string)
