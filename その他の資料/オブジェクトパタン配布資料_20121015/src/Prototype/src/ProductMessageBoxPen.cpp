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
	@brief		�R���X�g���N�^

	@li			
	@param		box_char
	@return		�Ȃ�
	@note		
	@date		2012/10/05
	@author		�����T��
*/
ProductMessageBoxPen::ProductMessageBoxPen(char box_char)
{
	BoxChar = box_char;
}

/**
	@brief		BOX�o�Z

	@li			
	@param		str
	@return		�Ȃ�
	@note		virtual		
	@date		2012/10/05
	@author		�����T��
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
	@brief		�R�s�[�쐬

	@li			
	@param		�Ȃ�
	@return		
	@note		virtual		
	@date		2012/10/05
	@author		�����T��
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
	@brief		�f�X�g���N�^

	@li			
	@param		�Ȃ�
	@return		
	@note		virtual		
	@date		2012/10/05
	@author		�����T��
*/
ProductMessageBoxPen::~ProductMessageBoxPen(void)
{
}


