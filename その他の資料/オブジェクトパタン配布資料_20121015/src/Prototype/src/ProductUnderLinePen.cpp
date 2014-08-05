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
	@brief		�R���X�g���N�^

	@li			
	@param		char ulchar : �A���_�[���C���p�L����
	@return		�Ȃ�
	@note		
	@date		2012/10/04
	@author		�����T��
*/
ProductUnderLinePen::ProductUnderLinePen(char ulchar)
{
	UnderLineChar = ulchar;
}

/**
	@brief		�g�p

	@li			
	@param		str
	@return		�Ȃ�
	@note		
	@date		2012/10/04
	@author		�����T��
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
	@brief		�N���[���쐬

	@li			
	@param		�Ȃ�
	@return		
	@note		
	@date		2012/10/04
	@author		�����T��
*/
Product* ProductUnderLinePen::createClone()
{
	ProductUnderLinePen* upen = new ProductUnderLinePen(UnderLineChar);
	return upen;
}


/**
	@brief		�f�X�g���N�^

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		
	@date		2012/10/04
	@author		�����T��
*/
ProductUnderLinePen::~ProductUnderLinePen(void)
{
}
