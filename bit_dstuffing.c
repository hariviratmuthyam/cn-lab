#include<stdio.h> 
#include<string.h>
int main(){

    char arr[20];
    int n;
    scanf("%s",arr);
    n = strlen(arr);
    int count=0,i;
    for (i=0; i<n;i++)
    { 
        if (arr[i]=='1' && count!=5)
            count++;
        if(arr[i]== '0')
        {
            count = 0;
            continue;    
        } 
        if(count == 5 && arr[i+1]=='0')
        {
            int j;
            for(j=i+1;j<n;j++)
                arr[j]=arr[j+1];
            arr[j] ='\0';
        }      
    }
    printf("%s",arr); 
}
