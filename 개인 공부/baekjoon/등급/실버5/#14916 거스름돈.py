price = int(input())
count = 0

change = price % 5 ;

def count_time (change, price, count):
    while (change % 2) != 0:
        if (change > price) or ((price // 5) == 0):
            return -1;

        count += 1;
        change = change + 5;

    return count

count = count_time (change, price, count);

if (count == -1):
    print(-1);
else :
    change_time = (price // 5) - count
    change_time += (price - (5 * change_time)) // 2 ;
    print(change_time);
