#include <stdio.h>

int main()
{
  int a, b, c;
  int s[3];

  scanf("%d %d %d", &a, &b, &c);

  if(a<b && a<c){
    s[0]=a;
    if(b<c){s[1]=b; s[2]=c;}
    else{s[1]=c; s[2]=b;}  
  }
  else if(b<c){
    s[0]=b;
    if(a<c){s[1]=a; s[2]=c;}
    else{s[1]=c; s[2]=a;}
  }
  else{
    s[0]=c;
    if(a<b){s[1]=a; s[2]=b;}
    else{s[1]=b; s[2]=a;}
  }

  printf("%d %d %d\n", s[0], s[1], s[2]);  
  return 0;

}
