#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],s1[10]={'0'},s2[10]={'1'},ch;
    int count=0,c=0;

    printf("Enter string : ");
    gets(s);
    printf("Entered String : %s\n",&s);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='1')
            count++;
    }

    printf("Enter e for even and o for odd : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'e':
            if(count%2==0)
                strcat(s,s1);
            else
                strcat(s,s2);
            break;
        case 'o':
            if(count%2!=0)
                strcat(s,s1);
            else
                strcat(s,s2);
            break;
    }

    printf("String after adding parity bits is : ");
    puts(s);
}