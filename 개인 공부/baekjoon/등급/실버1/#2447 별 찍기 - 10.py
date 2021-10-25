end_size = int(input())

pattern = ["***\n* *\n***\n"]

start_size = 3
time = 1

def makepattern(time, start_size, end_size):
    if (start_size > end_size):
        return time;
    else :
        mid_space = ((" " * (start_size // 3)) + "\n") * (start_size//3)
        pattern.append(pattern[time-1]*3+"\n"+pattern[time-1]+mid_space+pattern[time-1]+"\n"+pattern[time-1]*3)
        makepattern(time+1, start_size * 3, end_size)


time = makepattern(time, start_size, end_size)

print(pattern[-2])
