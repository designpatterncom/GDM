/**********************************************************************************************************************
 Create        : 2012/10/11
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#include "Singleton.h"

#if (0)
 public:() {}
#endif 

Singleton* Singleton::SingltonPtr = 0;
 
/**
	@brief		コンストラクタ

	@li			
	@param		なし
	@return		なし
	@note		
	@date		2012/10/11
	@author		今村裕一
*/
Singleton::Singleton(void)
{
	dummy0 = 0;
	dummy1 = 0;
}
/**
	@brief		インスタンス取得

	@li			
	@param		なし
	@return		
	@note		static
	@date		2012/10/11
	@author		今村裕一
*/
Singleton* Singleton::GetInstance(void)
{
	//-- 割込禁止開始処理
	if (SingltonPtr == 0) {
		SingltonPtr = new Singleton();
	}
	//-- 割込禁止解除処理
	return SingltonPtr;
}


/**
	@brief		表示

	@li			
	@param		なし
	@return		なし
	@note		
	@date		2012/10/11
	@author		今村裕一
*/
void Singleton::show(void)
{
	SingltonPtr->ShowPrivate();
}

#if (0)
 private:() {}
#endif 

void Singleton::ShowPrivate(void)
{
	dummy0++;
	dummy1++;
	printf("---------------------------------\n");
	printf("this    =0x%X\n",this);
	printf("dummy0  =%d, address= 0x%X\n",dummy0, &dummy0);
	printf("dummy1  =%d, address= 0x%X\n",dummy1, &dummy1);
	printf("---------------------------------\n");
	
}
