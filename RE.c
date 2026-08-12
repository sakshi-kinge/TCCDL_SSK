#include<stdio.h>
#include<string.h>
int main()
{
char re[20],str[20];
int i,accept=0;

printf("Enter Regular Expression:");
scanf("%19s",re);

printf("Enter Input String:");
scanf("%19s",str);

if(strcmp(re,"0")==0)
{
	if(strcmp(str,"0")==0)
	accept=1;
}
else if(strcmp(re,"1")==0)
{
	if(strcmp(str,"1")==0)
	accept=1;
}
else if(strcmp(re,"0+1")==0)
{
	if(strcmp(str,"0")==0||strcmp(str,"1")==0)
	accept=1;
}
else if(strcmp(re,"0.1")==0)
{
	if(strcmp(str,"01")==0)
	accept=1;
}
else if(strcmp(re,"0*")==0)
{
	accept=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='0')
		{
		accept=0;
		break;
		}
	}
}
else if(strcmp(re,"1*")==0)
{
	accept=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='1')
		{
		accept=0;
		break;
		}
	}
}
else
{
printf("Regular Expression Not Suppported\n");
return 0;
}

printf("\nEquivalent DFA is Generated For:%s\n",re);

if(accept)
	printf("String Accepted\n");
else
	printf("String Rejected\n");
return 0;
}





