end_size = int(input())

pattern = "***\n* *\n***"

start_size = 3


def makepattern(start_size, end_size):
    global pattern
    if (start_size > end_size or end_size == 3):
        return 0;
    else :
        pattern_split = pattern.split("\n")
        mid_space = ((" " * (start_size // 3)))
        pattern = pattern_split[0] * 3 +"\n"+ pattern_split[1] * 3 + "\n"+ pattern_split[2] * 3 + "\n" + pattern_split[0] + mid_space + pattern_split[0] + "\n" + pattern_split[1] + mid_space + pattern_split[1] + "\n" + pattern_split[2] + mid_space + pattern_split[2] + "\n" + pattern_split[0] * 3 +"\n" + pattern_split[1] * 3 + "\n" + pattern_split[2] * 3
        
        #pattern.append(pattern[time-1]*3+"\n"+pattern[time-1]+mid_space+pattern[time-1]+"\n"+pattern[time-1]*3)
        makepattern(start_size * 3, end_size)


makepattern(start_size*3, end_size)

print(pattern)
