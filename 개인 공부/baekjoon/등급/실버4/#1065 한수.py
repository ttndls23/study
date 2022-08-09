input_num = int(input()) # 입력 값

result = 0; # 출력 값

def find():
    # 100 미만의 경우 입력 값과 출력 값이 동일
    if (input_num < 100):
        result = input_num;

    else :
        result = 99;
        for i in range(100, input_num+1):
            if(i == 1000):
                continue
            
            # 입력 받은 숫자를 string 형식으로 변환하여 입력 문자 길이 구하기
            str_i = str(i); 
            minus_first = int(str_i[0]) - int(str_i[1]);
            minus_second = int(str_i[1]) - int(str_i[2]);
            
            if (minus_first == minus_second):
                result = result + 1;
                
    return result;

print(find());
