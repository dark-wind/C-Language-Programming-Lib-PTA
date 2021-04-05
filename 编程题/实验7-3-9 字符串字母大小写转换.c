#include <stdio.h>

int main()
{
    char str[100];
    char temp;
    for (int i = 0;; i++)
    {
        scanf("%c", &temp);
        str[i] = temp;
        if (temp == '#')
        {
            break;
        }
    }
    for (int i = 0;; i++)
    {
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }else
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        if(str[i]=='#'){
            break;
        }
        printf("%c",str[i]);
        
    }
    
    return 0;
}