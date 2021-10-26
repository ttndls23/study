num = int(input())

top_ = []

def top(num):

    if num == 1:
        top_.append([1, 3])
        return

    elif num == 2:
        top_.append([1, 2])
        top_.append([1, 3])
        top_.append([2, 3])
        return

    elif num == 3:
        top_.append([
    else :
        top(num-2)
        

top(num)
print(top_)


