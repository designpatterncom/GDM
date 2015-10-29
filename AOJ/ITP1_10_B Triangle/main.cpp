#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main()
{
  int a, b, C;
  double S, L, h, d, HL;

  scanf("%d %d %d", &a, &b, &C);

  d=sqrt(a*a+b*b-2*a*b*cos(C*PI/180));
  L=a+b+d;

  HL=L*0.5;
  S=sqrt(HL*(HL-a)*(HL-b)*(HL-d));

  h=2*S/a;

  printf("%f\n%f\n%f\n", S, L, h);  
  return 0;

}
