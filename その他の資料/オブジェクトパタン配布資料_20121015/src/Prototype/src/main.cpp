/**********************************************************************************************************************
	Create        : 2012/10/05
	Author        : imamura
	Description   : 
	Maintenance   : 
	Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
**********************************************************************************************************************/

#include "Product.h"
#include "ProductMessageBoxPen.h"
#include "ProductUnderLinePen.h"
#include "Manager.h"


int main(void)
{
	printf("Prototype Test\n\n");
	
	Manager mana;
	ProductUnderLinePen upen0('*');
	ProductMessageBoxPen mpen0('+');
	
	mana.SetProduct(UnderLinePen, &upen0);
	mana.SetProduct(MessageBox, &mpen0);
	
	Product* pro0 = mana.create(UnderLinePen);
	Product* pro1 = mana.create(MessageBox);
	
	pro0->use("Muratec");
	pro0->use("Imamura.Yuichi");
	pro1->use("Muratec");
	pro1->use("Imamura.Yuichi");
}


