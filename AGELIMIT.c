#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        int y;
        scanf("%d",&y);
        int a;
        scanf("%d",&a);
        if (a<y && a>=x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}

