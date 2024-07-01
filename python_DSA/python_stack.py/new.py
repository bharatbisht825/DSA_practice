x="]["
test=list(x)
stack=[]
pair = {'(': ')', '{': '}', '[': ']'}
for i in range(0,len(x)):
    stack.append(test[i])
    if((stack[len(stack)-2],stack[len(stack)-1]) in pair.items() and len(stack)>=2 ):
                stack.pop()
                stack.pop()
print(stack)