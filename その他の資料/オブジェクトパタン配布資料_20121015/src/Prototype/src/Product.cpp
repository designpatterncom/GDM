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
	@brief		�R���X�g���N�^

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		
	@date		2012/10/09
	@author		�����T��
*/
Product::Product(void)
{
}

/**
	@brief		�g�p

	@li			
	@param		str
	@return		�Ȃ�
	@note		virtual		
	@date		2012/10/09
	@author		�����T��
*/
void Product::use(char* str)
{
	printf("%s\n",str);
}

/**
	@brief		�N���[���쐬

	@li			
	@param		�Ȃ�
	@return		
	@note		virtual		
	@date		2012/10/09
	@author		�����T��
*/
Product* Product::createClone(void)
{
	return 0;
}

/**
	@brief		�f�X�g���N�^

	@li			
	@param		�Ȃ�
	@return		
	@note		virtual		
	@date		2012/10/09
	@author		�����T��
*/
Product::~Product(void)
{
}

