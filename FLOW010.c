#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    char x;
	    scanf(" %c", &x);
	    if(x=='B' || x=='b')
	    {
	        printf("BattleShip\n");
	    }
	    else if(x=='C' || x=='c')
	    {
	        printf("Cruiser\n");
	    }
	    else if(x=='D' || x=='d')
	    {
	        printf("Destroyer\n");
	    }
	    else if(x=='F' || x=='f')
	    {
	        printf("Frigate\n");
	    }
	    
	}
	return 0;
}
