#include <stdio.h>

int main()
{
	double v;

	while(scanf("%lf", &v)!=EOF){
		double t=v/9.8;
		double y=4.9*t*t;
		double n=(y+5.0)/5.0;
		n+=1.0;
		printf("%d\n", (int)n);
	}

	return 0;
}
