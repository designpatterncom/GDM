/**********************************************************************************************************************
	Create        : 2012/10/11
	Author        : imamura
	Description   : 
	Maintenance   : 
	Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
**********************************************************************************************************************/

#include "Singleton.h"


int main(void) {
	
	printf("*************\n");
	printf("* Singleton *\n");
	printf("*************\n");
	
	Singleton org0;
	Singleton org1;
	
	Singleton* sig0 = org0.GetInstance();
	Singleton* sig1 = Singleton::GetInstance();
	
	sig0->show();
	sig1->show();
	org0.show();
	org1.show();
	
	return 0;
}
