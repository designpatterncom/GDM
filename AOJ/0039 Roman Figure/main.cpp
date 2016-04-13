#include <stdio.h>
#include <string.h>

int char2int(char c)
{
	switch(c){
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default: return 0;
	}
}

int main()
{
	char s[50];

	while(scanf("%s", &s)!=EOF){
		int l=strlen(s);
		int n=0, tmp, i;
		for(i=l-1; i>0; i--){
			if((tmp=char2int(s[i])-char2int(s[i-1]))>0){ n+=tmp; i--; }
			else n+=char2int(s[i]);
		}
		if(i==0) n+=char2int(s[i]);
		printf("%d\n", n);
	}

	return 0;
}
