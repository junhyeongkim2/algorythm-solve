import sys

stack  = [] 

n = int(input())

for i in range(n) : 
    num = int(input())
    if num > 0 :
        stack.append(num)
    elif num == 0 :
        last = stack.pop()


print(sum(stack))
        