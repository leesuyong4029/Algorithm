def solution(s):
    s=s.split()
    stack=[]
    for x in s:
        if x == 'Z':
            stack.pop()
        else:
            stack.append(int(x))

    return sum(stack)