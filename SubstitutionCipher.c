#include<stdio.h>
#include<string.h>
int main()
{
int l,j,i=0,b[50],d[50],key,n;
char p[50],e[50],c[50],a[50];

printf("enter the message: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]<91)
    {
        if((a[i]+3)>=91)
        b[i]=(((a[i]+3)%91)+65);
        else
        b[i]=a[i]+3;
    }
    else
    {        
        if((a[i]+3)>=123)
        b[i]=(((a[i]+3)%123)+97);
        else
        b[i]=a[i]+3;
    }
}
b[i]='\0';
printf("the cipher is ");
for(i=0;b[i]!='\0';i++)
printf("%c",b[i]);
printf("\n");

for(i=0;b[i]!='\0';i++)
{
    if(b[i]<91)
    {
        if((b[i]-3)<=64)
        p[i]=(((b[i]-3))+26);
        else
        p[i]=a[i]-3;
    }
    else
    {        
        if((b[i]-3)<=96)
        p[i]=(((b[i]-3)%123)+26);
        else
        p[i]=b[i]-3;
    }
    //if(b[i]>123
}
printf("the plaintext is ");
for(i=0;p[i]!='\0';i++)
printf("%c",p[i]);
}


