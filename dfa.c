#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,len;

printf("Enter a binary string:");
scanf("%99s",str);
len=strlen(str);

if(len==0)
{
printf("String Rejected\n");
return 0;
}

for(i=0;i<len;i++);
{
if(str[i]!='0'&&str[i]!='1')
printf("Invalid String\n");
if(str[0]=='0'&&str[len-1]=='1')
printf("String Accepted\n");
else
printf("String Rejected\n");
}
return 0;
}
