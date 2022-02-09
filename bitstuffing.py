def bitstuffing(n,arr):
    count=0
    stuffed=[]
    for i in range(len(arr)):
        if(arr[i]==1):
            count+=1
            stuffed.append(arr[i])
            if (count==5):
                stuffed.append(0)
                count=0
        else:
            count=0
            stuffed.append(arr[i])
    print(*stuffed,sep=' ')
n=12
arr=list(map(int,input().split(' ')))
bitstuffing(n,arr)

