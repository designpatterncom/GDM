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
	@brief		�R���X�g���N�^

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		
	@date		2012/10/11
	@author		�����T��
*/
Singleton::Singleton(void)
{
	dummy0 = 0;
	dummy1 = 0;
}
/**
	@brief		�C���X�^���X�擾

	@li			
	@param		�Ȃ�
	@return		
	@note		static
	@date		2012/10/11
	@author		�����T��
*/
Singleton* Singleton::GetInstance(void)
{
	//-- �����֎~�J�n����
	if (SingltonPtr == 0) {
		SingltonPtr = new Singleton();
	}
	//-- �����֎~��������
	return SingltonPtr;
}


/**
	@brief		�\��

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		
	@date		2012/10/11
	@author		�����T��
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
