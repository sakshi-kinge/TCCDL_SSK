#include<stdio.h>
#include<string.h>
int checkCFG(char str[],int start,int end)
{
if(end-start==1)
{
return(str[start]=='a'&&str[end]=='b');
}
if(str[start]=='a'&&str[end]=='b')
{
return checkCFG(str,start+1,end-1);
}
return 0;
}
int main()
{
char str[100];
int len;
printf("Grammar:S->aSb|ab\n");
printf("Enter the input string:");
scanf("%s",str);
len=strlen(str);
if(len%2!=0)
{
printf("String Rejected");
return 0;
}
if(checkCFG(str,0,len-1))
printf("String Accepted");
else
printf("String Rejected");
return 0;
}
