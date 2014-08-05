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
	Product(void);							//-- �R���X�g���N�^
	virtual void use(char* str);			//-- �g�p
	virtual Product* createClone(void);		//-- �N���[���쐬
	virtual ~Product(void);					//-- �f�X�g���N�^
};

#endif /* PRODUCT_H_ */
