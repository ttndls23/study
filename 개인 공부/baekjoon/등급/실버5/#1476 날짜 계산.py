E, S, M = input().split()


year = 1;

while(1):    
    if ((year % 15) == (int(E) % 15)) and ((year % 28) == (int(S) % 28)) and ((year % 19) == (int(M) % 19)):
        break;

    else :
        year = year + 1


print(year)
