/**********************************************************************************************************************
 Create        : 2012/10/04
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef MANAGER_H_
#define MANAGER_H_

#include "mytype.h"
#include "Product.h"

#define PRODUCT_MAP		10

enum ProductKind {
	UnderLinePen = 0,
	MessageBox,
	/* これより上に追加して下さい */
	ProductKindEndPoint,
};

struct ProductMap {
	enum ProductKind kind;
	Product* proto;
};

class Manager {
public:
	Manager();														//-- コンストラクタ
	bool SetProduct(enum ProductKind kind, Product* proto);			//-- Productの登録
	Product* create(enum ProductKind kind);							//-- Productのクローン取得
private:
	struct ProductMap	Pmap[PRODUCT_MAP];							//-- プロダクト保存領域
	uint32				PmapSaveNum;								//-- プロダクト保存数
};

#endif /* MANAGER_H_ */
