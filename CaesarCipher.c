#include<stdio.h>
int main()
{
    char string[100], result[100];
    int n,i,m,x;
    printf("Enter the message:\n");
    scanf("%s",&string);

    printf("Enter the displacement:\n");
    scanf("%d",&x);

    printf("Encrypted message:\n");
    for(i=0; string[i]!='\0';i++)
    {
        m = string[i];
        n = m + x;
        if(m<91)
            result[i] = (n<91) ? n : (n-=26);   
        else if(m>96 && m<123)
            result[i] = (n<123)? n : (n-=26);
    }
    printf("%s\n",result);

    printf("Decrypting...\n");
    for(i=0; result[i]!='\0'; i++)
    {
        m = result[i];
        n = m - x;
        if(m > 65 && m < 91)
            string[i] = (n>=65) ? n : (n+=26);
        else if(m > 96 && m < 123)
            string[i] = (n>96) ? n : (n+=26);
    }
    printf("%s\n",string);
}
