/**********************************************************************************************************************
	Create        : 2012/10/05
	Author        : imamura
	Description   : 
	Maintenance   : 
	Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
**********************************************************************************************************************/
#include "Product.h"

#if (0)
 public:() {}
#endif 
#if (0)
 public:() {}
#endif 

/**
	@brief		コンストラクタ

	@li			
	@param		なし
	@return		なし
	@note		
	@date		2012/10/09
	@author		今村裕一
*/
Product::Product(void)
{
}

/**
	@brief		使用

	@li			
	@param		str
	@return		なし
	@note		virtual		
	@date		2012/10/09
	@author		今村裕一
*/
void Product::use(char* str)
{
	printf("%s\n",str);
}

/**
	@brief		クローン作成

	@li			
	@param		なし
	@return		
	@note		virtual		
	@date		2012/10/09
	@author		今村裕一
*/
Product* Product::createClone(void)
{
	return 0;
}

/**
	@brief		デストラクタ

	@li			
	@param		なし
	@return		
	@note		virtual		
	@date		2012/10/09
	@author		今村裕一
*/
Product::~Product(void)
{
}

