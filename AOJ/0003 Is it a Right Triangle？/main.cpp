#include <stdio.h>

int main()
{
	int n;
	int i, j;
	int a[3];
	int max;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		for(j=0; j<3; j++) a[j]*=a[j];
		max=0;
		for(j=0; j<3; j++){
			if(max<a[j]) max=a[j];
		}
		if(a[0]+a[1]+a[2]==2*max) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
