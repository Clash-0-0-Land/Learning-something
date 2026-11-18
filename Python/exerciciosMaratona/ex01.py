s = int(input())
n = input().split(" ")
tot=0
cont=0
v=0
if len(n)!=1:

    for q in range(s):
        tot+=int(n[q])

    for i in range(tot//2):
        tot-=2
        cont+=2

        for j in range(8):
            if 2**j == tot and 2**j in int(n): 
                v+=1
                break
        for j in range(8):
            if 2**j == tot and 2**j in int(n): 
                v+=1
                break
        if v==2: 
            print("Y")
            break
        else:
            v=0



else: print("N")