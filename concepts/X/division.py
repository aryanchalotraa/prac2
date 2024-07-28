#division without division operator
a=78
b=7
a=a-(a%b)
res=0
temp=b
while(temp<=a):
    res+=1
    temp+=b

print(res)


