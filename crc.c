#include<stdio.h>
#include<string.h>
int main()
{
    char divisor[100],data[100],data1[100];
    int divl,dl,i,j;
    printf("Enter data : ");
    gets(data);
    printf("Enter divisor : ");
    gets(divisor);

    dl=strlen(data);
    divl=strlen(divisor);

    for(i=0;i<divl-1;i++)
        data[dl+i]='0';
    data[dl+divl-1]='\0';

    printf("Data after padding zeroes : %s\n",data);
    strcpy(data1,data);
    for(i=0;i<dl;i++)
    {
        if(data1[i]=='1')
        {
            for(j=0;j<divl;j++)
            {
                if(data1[i+j]==divisor[j])
                    data1[i+j]='0';
                else
                    data1[i+j]='1';
            }
        }
    }

    for(i=dl;i<dl+divl-1;i++)
    {
        data[i]=data1[i];
    }
    printf("Codeword: %s ",data);
}