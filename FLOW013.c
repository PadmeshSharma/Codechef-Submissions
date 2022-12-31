#include <stdio.h>

int main(void) 
{
    int t;
	scanf("%d",&t);
	while (t--)
	{
	    int a,b,c,d;
	    scanf("%d%d%d",&a,&b,&c);
	    d=a+b;
	    if (d+c==180)
	        printf("YES\n");
        else 
        printf("NO \n");
	}
	return 0;
}

