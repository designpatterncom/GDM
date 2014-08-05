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
	@brief		コンストラクタ

	@li			
	@param		なし
	@return		なし
	@note		
	@date		2012/10/04
	@author		今村裕一
*/
Manager::Manager()
{
	PmapSaveNum = 0;
	memset(&Pmap[0], 0, sizeof(Pmap));
}

/**
	@brief		Productの登録

	@li			
	@param		kind
	@param		proto
	@return		true:保存OK		false;保存NG
	@note		
	@date		2012/10/04
	@author		今村裕一
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
	@brief		Productのクローン取得

	@li			
	@param		kind		プロダクト種類
	@return		
	@note		
	@date		2012/10/04
	@author		今村裕一
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

