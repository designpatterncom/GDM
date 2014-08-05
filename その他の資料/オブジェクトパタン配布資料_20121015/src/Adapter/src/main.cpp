/**********************************************************************************************************************
	Create        : 2012/10/12
	Author        : imamura
	Description   : 
	Maintenance   : 
	Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
**********************************************************************************************************************/

#include <stdio.h>

#include"AdapterExtends.h"
#include"AdapterObjectComposition.h"

int main(void)
{
	printf("****************\n");
	printf("*    Adapter   *\n");
	printf("****************\n");

	printf("\n");
	printf("*** Œp³ **\n");
	
	Target* tar0 = (Target*)(new AdapterExtends());
	tar0->Request();
	
	printf("\n");
	printf("*** ˆÏ÷ **\n");
	Target* tar1 = (Target*)(new AdapterObjectComposition());
	tar1->Request();
	
	
	return 0;
}
