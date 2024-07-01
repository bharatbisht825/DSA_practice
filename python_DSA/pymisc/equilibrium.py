arr = [1,2,0,3]
N=4
if(N==1):
    print( arr[0])
for i in range(1,N-1):
    if(sum(arr[0:i])==sum(arr[i+1:])):
        print(i+1)
