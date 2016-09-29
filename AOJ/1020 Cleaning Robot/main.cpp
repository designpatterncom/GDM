#include "stdio.h"
#include "math.h"
 
int main()
{
 int n;
 char s, t, b;
 
 scanf("%d", &n);
 while(n>0){
  scanf(" %c %c %c", &s, &t, &b);
  s-='A'; t-='A'; b-='A';
 
  int footprint1[9]={0,0,0,0,0,0,0,0,0};
  int footprint2[9];
  footprint1[s] = 1;
  for(int i=0; i<n; i++){
   for(int j=0; j<9; j++) footprint2[j]=0;
   for(int j=0; j<9; j++){
    if(footprint1[j]>0){
     if(j>2 && j-3!=b) footprint2[j-3]+=footprint1[j];
     else footprint2[j]+=footprint1[j];
     if(j%3>0 && j-1!=b) footprint2[j-1]+=footprint1[j];
     else footprint2[j]+=footprint1[j];
     if((j+1)%3>0 && j+1!=b) footprint2[j+1]+=footprint1[j];
     else footprint2[j]+=footprint1[j];
     if(j<6 && j+3!=b) footprint2[j+3]+=footprint1[j];
     else footprint2[j]+=footprint1[j];
    }
   }
   for(int j=0; j<9; j++) footprint1[j]=footprint2[j];
  }
 
  printf("%f\n", footprint1[t] / pow(4.0, n));
 
  scanf("%d", &n);
 }
 
 return 0;
}