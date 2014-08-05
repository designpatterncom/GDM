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
	@param		なし
	@return		なし
	@note		
	@date		2012/10/12
	@author		今村裕一
*/
AdapterObjectComposition::AdapterObjectComposition(void)
{
}

/**
	@brief		リクエスト

	@li			
	@param		なし
	@return		なし
	@note		virtual		
	@date		2012/10/12
	@author		今村裕一
*/
void AdapterObjectComposition::Request(void)
{
	adaptee.SpecialRequest();
}

