#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=1,size,n,t=1,m=0,k,ptr=0,i1,j1;
	char ct[40],str[50],rf[10][50]={0},rf1[10][50]={0};
	printf("Enter the no of rails: ");
	scanf("%d",&n);
	printf("Enter the string: ");
	scanf("%s",str);
	size=strlen(str);
	
	printf("\n\n");
	
	printf("%c ",str[0]);

	while(j<size)
	{
		for(i=1;i<n;i++,j++)
		{
			if(j<size)
			{
				rf[i][j]=str[j];
				t++;
			}
			else
			{
				rf[i][j]='X';
				t++;
			}
		}
		for(i=n-2;i>=0;i--,j++)
		{
			if(j<size)
			{
				rf[i][j]=str[j];
				t++;
			}
			else
			{
				rf[i][j]='X';
				t++;
			}
		}
	}
	ct[m++]=str[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<t;j++)
		{
			if(i!=0||j!=0)
			{
			if(rf[i][j]==0)
				printf(" ");
			else
			{
				ct[m++]=rf[i][j];
				printf("%c",rf[i][j]);
			}
			}
		}
		printf("\n");
	}

	printf("\n\nThe cipher text is: \n");
	for(i=0;i<m;i++)
		printf("%c",ct[i]);


	printf("\n\nDecrypting....\n\n");

	rf1[0][0]=ct[ptr++];
	j=1;
	for(k=0;k<n;k++)
	{
		while(j<m)
		{
			for(i=1;i<n;i++,j++)
			{
				if(i==k)
					rf1[i][j]=ct[ptr++];
				else if (i>k)
				{
					rf1[i][j]='_';
				}
					
			}

			for(i=n-2;i>=0;i--,j++)
			{
				if(i==k)
					rf1[i][j]=ct[ptr++];
				else if(i>k)
					rf1[i][j]='_';
			}
		}
		j=1;
		printf("%c",rf1[0][0]);
		for(i1=0;i1<n;i1++)
		{
		for(j1=0;j1<m;j1++)
		{
			if(i1!=0||j1!=0)
			{
			if(rf1[i1][j1]==0)
				printf(" ");
			else
			{
				//ct[m++]=rf[i][j];
				printf("%c",rf1[i1][j1]);
			}
			}
		}
		printf("\n");
		}
		printf("\n\n");
	}
	
	printf("The plain text is:  %s\n",str);
}
