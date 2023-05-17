#include<stdio.h>
#include<string.h>
int main()
{
    char dw[100],s1[100],s2[100];
    int sl,dwl,pad=0,carry=0;
    printf("Enter dataword: ");
    gets(dw);
    printf("Enter segment length : ");
    scanf("%d",&sl);
    int sum[sl];
    for(int i=0;i<sl;i++)
        sum[i]=0;
    if(sl!=0 && sl!=1)
    {
        pad=sl-(dwl%sl);
    }
    if((dwl%sl)!=0)
    {
        for(int i=0;i<pad;i++)
            s1[i]='0';
    }
    strcat(s1,dw);
    printf("Dataword after padding zeroes: ");
    puts(s1);

    for(int i=0;i<strlen(s1);i+=sl)
    {
        for(int j=i+sl-1;j>=0;j--)
        {
            sum[j-i]=(sum[j-i]+s1[j]-48+carry)%2;
            carry=(sum[j-i]+s1[j]-48+carry)/2;
        }
        for(int k=sl-1;k>=0;k--)
        {
            sum[k]=(sum[k]+carry)%2;
            carry=(sum[k]+carry)/2;

        }
    }

    for(int i=0;i<sl;i++)
    {
        s2[i]=sum[i]+48;
    }
    
    printf("checksum : ");
    puts(s2);
    strcat(dw,s2);
    printf("Codeword : ");
    puts(dw);
}