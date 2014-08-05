/**********************************************************************************************************************
 Create        : 2012/10/05
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef PRODUCTMESSAGEBOXPEN_H_
#define PRODUCTMESSAGEBOXPEN_H_

#include "mytype.h"
#include "Product.h"

class ProductMessageBoxPen : public Product {
public:
	ProductMessageBoxPen(char box_char);			//-- コンストラクタ
	void use(char* str);					//-- BOX出六
	Product* createClone(void);				//-- コピー作成
	~ProductMessageBoxPen(void);			//-- デストラクタ
private:
	char BoxChar;
};

#endif /* PRODUCTMESSAGEBOXPEN_H_ */
