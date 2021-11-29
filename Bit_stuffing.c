#include <stdio.h>
int main()
{
    int in[50],out[50],n,i=0,j=0,count,x;
    printf("Enter length of data:");
    scanf("%d", &n);
    printf("Enter the data:");
    for (x = 0; x < n; x++)
        scanf("%d", &in[x]);
    while (i < n) {
        count=1;
        if (in[i] == 1)
        {
            out[j] = in[i];
            while(i<n && in[i]==1)
            {
                j++,i++,count++;
                out[j] = in[i];
                if(count == 5)
                {
                    j++;
                    out[j] = 0;
                }
            }
        }
        else
            out[j] = in[i];
        i++,j++;
    }
    printf("Result:");
    for (i = 0; i < j; i++)
        printf("%d", out[i]);
    return 0;
}
