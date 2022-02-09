def bitdestuffing(n,arr):
    count=0
    destuffed=[]
    for i in range(len(arr)):
        if(arr[i]==1):
            count+=1
            destuffed.append(arr[i])
    
        else:
            destuffed.append(arr[i])
            if(count==5):
                destuffed.remove(arr[i])
            count=0
        
    print('after destufing:',*destuffed,sep=' ')
n=12
arr=list(map(int,input().split(' ')))
bitdestuffing(n,arr)


