number, measure_order = map(int, input().split());

for i in range(1, number + 1):
        
    if (number % i == 0):
        measure_order -= 1;

    if (measure_order == 0):
        print(i);
        break;

    if (i == int(number)):
        print(0);
        break;
