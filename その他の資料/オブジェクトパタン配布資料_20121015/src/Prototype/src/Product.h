/**********************************************************************************************************************
 Create        : 2012/10/04
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include "mytype.h"

class Product {
public:
	Product(void);							//-- コンストラクタ
	virtual void use(char* str);			//-- 使用
	virtual Product* createClone(void);		//-- クローン作成
	virtual ~Product(void);					//-- デストラクタ
};

#endif /* PRODUCT_H_ */
