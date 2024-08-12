def solution(num, k):
    answer = 0
    str_num = str(num) # num을 문자열로 변환해준다.

    for i in str_num: # 문자열로 변환해준 num을 첫 번째 인덱스부터 +1 해준다.
        answer += 1
        if i == str(k): # 이때 만약에 num의 각 요소(i)가 k와 같으면 answer을 return 해준다.
            return answer
    return -1
    
    return answer