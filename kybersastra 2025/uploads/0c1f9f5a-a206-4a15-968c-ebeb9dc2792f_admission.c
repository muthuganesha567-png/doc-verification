#include<stdio.h>
main()
{
	int p,c,m;
	printf("enter the marks of physics,maths,chemistry");
	scanf("%d%d%d",&p,&c,&m);
	if(m>=65 && p>=55 && c>50)
	{
		if((m+p+c)>=190 || (m+p)>=140)
		printf("eligible");
		else
		printf("not eligible");
	}
	else
	printf("Not eligible");
}	
