#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,k,c,m,flag=0;
void stringmatch()
{
	i=m=k=c=j=0;
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			i++;
			m++;
			if(pat[i]=='\0')
			{
				flag=1;
				for(k=0;rep[k]!='\0';k++,j++)
				ans[j]=rep[k];
				i=0;
				c=m;
			}
		}
		else
		{
			ans[j]=str[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}
	ans[j]='\0';
}
void main()
{
	printf("enter main string:\n");
	gets(str);
	printf("enter pattern string:\n");
	fflush(stdin);
	gets(pat);
	printf("enter replacement string:\n");
	fflush(stdin);
	gets(rep);
	stringmatch();
	if(flag==1)
	{
		printf("final string:%s\n",ans);
	}
	else
	{
		printf("no pattern found\n");
	}
}
