a=[[1,1],[1,0]]
b=[[0,0],[2,2]]
for i in range(0,4):   
            b[0][0]=(a[0][0]*a[0][0])+(a[0][1]*a[1][0])
            b[0][1]=(a[0][0]*a[0][1])+(a[0][1]*a[1][1])
            b[1][0]=(a[1][0]*a[0][0])+(a[1][1]*a[1][0])
            b[1][1]=(a[1][0]*a[0][1])+(a[1][1]*a[1][1])
print(b[1][0])