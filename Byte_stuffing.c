#include<stdio.h>
#include<string.h>
int main() {
    char s[6] = "dlestx", e[6] = "dleetx", str[20], ex[2], out[30];
    int i = 0, pos, l, j=6, x, y = 0;
    printf("Enter string:");
    gets(str);
    l = strlen(str);
    printf("Enter the position:");
    scanf("%d", &pos);
    printf("Enter the character:");
    scanf("%s",&ex);
    for (x = 0; x < 6; x++)
        out[x] = s[x];
    puts(out);
    while (i < l) 
    {
        if (i == pos - 1)
        {
            out[j] = 'd';
            out[j + 1] = 'l';
            out[j + 2] = 'e';
            out[j + 3] = ex[0];
            out[j + 4] = 'd';
            out[j + 5] = 'l';
            out[j + 6] = 'e';
            j += 7;
        }
        if (str[i] == 'd' && str[i + 1] == 'l' && str[i + 2] == 'e')
        {
            out[j] = 'd';
            out[j + 1] = 'l';
            out[j + 2] = 'e';
            j += 3;
        }
        out[j] = str[i];
        i++,j++;
    }
    for (y = 0; y < 6; y++)
        out[j++]=e[y];
    out[j++]='\0';
    puts(out);
    return 0;
}
