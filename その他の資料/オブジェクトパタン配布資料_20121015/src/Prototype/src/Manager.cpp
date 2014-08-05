/**********************************************************************************************************************
 Create        : 2012/10/04
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#include "Manager.h"

#if (0)
 public:() {}
#endif 

/**
	@brief		�R���X�g���N�^

	@li			
	@param		�Ȃ�
	@return		�Ȃ�
	@note		
	@date		2012/10/04
	@author		�����T��
*/
Manager::Manager()
{
	PmapSaveNum = 0;
	memset(&Pmap[0], 0, sizeof(Pmap));
}

/**
	@brief		Product�̓o�^

	@li			
	@param		kind
	@param		proto
	@return		true:�ۑ�OK		false;�ۑ�NG
	@note		
	@date		2012/10/04
	@author		�����T��
*/
bool Manager::SetProduct(enum ProductKind kind, Product* proto)
{
	if (PmapSaveNum >= PRODUCT_MAP) {
		return false;
	}
	
	Pmap[PmapSaveNum].kind = kind;
	Pmap[PmapSaveNum].proto = proto;
	
	PmapSaveNum++;
	return true;
}

/**
	@brief		Product�̃N���[���擾

	@li			
	@param		kind		�v���_�N�g���
	@return		
	@note		
	@date		2012/10/04
	@author		�����T��
*/
Product* Manager::create(enum ProductKind kind)
{
	if (kind >= ProductKindEndPoint) {
		return NULL;
	}
	
	Product* product_p = NULL;
	
	uint32 count = 0;
	for (count = 0; count < PmapSaveNum; count++) {
		if (kind == Pmap[count].kind) {
			product_p = Pmap[count].proto;
		}
	}
	
	if (product_p == NULL) {
		return NULL;
	}
	
	return product_p->createClone();
}

#if (0)
 private:() {}
#endif 

