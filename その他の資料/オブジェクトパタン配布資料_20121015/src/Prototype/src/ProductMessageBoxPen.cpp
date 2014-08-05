/**********************************************************************************************************************
 Create        : 2012/10/05
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#include "ProductMessageBoxPen.h"
#if (0)
 public:() {}
#endif 

/**
	@brief		コンストラクタ

	@li			
	@param		box_char
	@return		なし
	@note		
	@date		2012/10/05
	@author		今村裕一
*/
ProductMessageBoxPen::ProductMessageBoxPen(char box_char)
{
	BoxChar = box_char;
}

/**
	@brief		BOX出六

	@li			
	@param		str
	@return		なし
	@note		virtual		
	@date		2012/10/05
	@author		今村裕一
*/
void ProductMessageBoxPen::use(char* str)
{
	uint32 length = 0;
	while ( *(str + length) != '\0') {
		length++;
	}
	
	printf("\n");
	for (uint32 i = 0; i< length + 4;i++) {
		printf("%c", BoxChar);
	}
	printf("\n");
	printf ("%c ",BoxChar);
	printf("%s", str);
	printf (" %c\n",BoxChar);
	for (uint32 i = 0; i< length + 4;i++) {
		printf("%c", BoxChar);
	}
	printf("\n");
}

/**
	@brief		コピー作成

	@li			
	@param		なし
	@return		
	@note		virtual		
	@date		2012/10/05
	@author		今村裕一
*/
Product* ProductMessageBoxPen::createClone(void)
{
	ProductMessageBoxPen* mpen = new ProductMessageBoxPen(BoxChar);
	return mpen;
}

#if (0)
 private:() {}
#endif 
/**
	@brief		デストラクタ

	@li			
	@param		なし
	@return		
	@note		virtual		
	@date		2012/10/05
	@author		今村裕一
*/
ProductMessageBoxPen::~ProductMessageBoxPen(void)
{
}


