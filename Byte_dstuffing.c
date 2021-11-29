#include<stdio.h>
#include<string.h>
int main() {
    char str[20],out[30];
    int i = 0,l, j=0, x, y = 0;
    printf("Enter string:");
    gets(str);
    i += 6;
    l = strlen(str)-6;
    while (i < l) 
    {
        if (str[i] == 'd' && str[i + 1] == 'l' && str[i + 2] == 'e' && str[i + 3] == 'd' && str[i + 4] == 'l'&& str[i + 5] == 'e')
        {
            i += 3;
        }
        else if (str[i] == 'd' && str[i + 1] == 'l' && str[i + 2] == 'e' && str[i + 4] == 'd' && str[i + 5] == 'l'&& str[i + 6] == 'e')
        {
            i+=7;
        }
        out[j] = str[i];
        i++,j++;
    }
    out[j++]='\0';
    puts(out);
    return 0;
}
