/**********************************************************************************************************************
 Create        : 2012/10/04
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#include "ProductUnderLinePen.h"


#if (0)
 public:() {}
#endif 

/**
	@brief		コンストラクタ

	@li			
	@param		char ulchar : アンダーライン用キャラ
	@return		なし
	@note		
	@date		2012/10/04
	@author		今村裕一
*/
ProductUnderLinePen::ProductUnderLinePen(char ulchar)
{
	UnderLineChar = ulchar;
}

/**
	@brief		使用

	@li			
	@param		str
	@return		なし
	@note		
	@date		2012/10/04
	@author		今村裕一
*/
void ProductUnderLinePen::use(char* str)
{
	uint32 length = 0;
	while ( *(str + length) != '\0') {
		length++;
	}
	
	printf("\n");
	printf("%s\n", str);
	for (uint32 i = 0; i < length; i++) {
		printf("%c", UnderLineChar);
	}
	printf("\n");
	
}

/**
	@brief		クローン作成

	@li			
	@param		なし
	@return		
	@note		
	@date		2012/10/04
	@author		今村裕一
*/
Product* ProductUnderLinePen::createClone()
{
	ProductUnderLinePen* upen = new ProductUnderLinePen(UnderLineChar);
	return upen;
}


/**
	@brief		デストラクタ

	@li			
	@param		なし
	@return		なし
	@note		
	@date		2012/10/04
	@author		今村裕一
*/
ProductUnderLinePen::~ProductUnderLinePen(void)
{
}
