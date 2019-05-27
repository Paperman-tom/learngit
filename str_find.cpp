#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[20],*p1,*p2;
	int locat[10],posit=0,i=0,len2,j;
	gets(s1);
	gets(s2);
	p1=s1;
	p2=s2;
	for(j=0;*p2!='\0';j++,p2++)
	len2=j+1;
	p1=s1;
	p2=s2;
	do
	{
		if(*p1!=*p2)
		{
			p1++;
			posit++;
		}
		else
		{
			while((*p1==*p2)&&(*p2!='\0'))
			{
				p1++;
				p2++;
				posit++;
			}
			if(*p2=='\0')
			{
				locat[i]=posit-len2;
				i++;
			}
		}
		p2=s2;
	}
	while(*p1!='\0');
	if(i<1)
	printf("NO\n");
	else
	{
		printf("%dtimes",i);
		for(int j=0;j<i;j++)
		printf(",%d",locat[j]);
		printf("\b");
	
	}
	
return 0;	
}