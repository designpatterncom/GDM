/**********************************************************************************************************************
 Create        : 2012/10/12
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#include "AdapterObjectComposition.h"

#if (0)
 public:() {}
#endif 

/**
	@brief		null

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		
	@date		2012/10/12
	@author		�����T��
*/
AdapterObjectComposition::AdapterObjectComposition(void)
{
}

/**
	@brief		���N�G�X�g

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		virtual		
	@date		2012/10/12
	@author		�����T��
*/
void AdapterObjectComposition::Request(void)
{
	adaptee.SpecialRequest();
}

