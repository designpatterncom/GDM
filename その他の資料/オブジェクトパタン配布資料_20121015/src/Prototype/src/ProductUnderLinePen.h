/**********************************************************************************************************************
 Create        : 2012/10/04
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef PRODUCTUNDERLINEPEN_H_
#define PRODUCTUNDERLINEPEN_H_

#include "mytype.h"
#include "Product.h"

class ProductUnderLinePen : public Product {
public:
	ProductUnderLinePen(char ulchar);		//-- コンストラクタ
	void use(char* str);					//-- 使用
	Product* createClone();					//-- クローン作成
	~ProductUnderLinePen();					//-- デストラクタ
private:
	char UnderLineChar;						//-- アンダーラインキャラ
};

#endif /* PRODUCTUNDERLINEPEN_H_ */
