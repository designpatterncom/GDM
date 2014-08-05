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
	ProductUnderLinePen(char ulchar);		//-- �R���X�g���N�^
	void use(char* str);					//-- �g�p
	Product* createClone();					//-- �N���[���쐬
	~ProductUnderLinePen();					//-- �f�X�g���N�^
private:
	char UnderLineChar;						//-- �A���_�[���C���L����
};

#endif /* PRODUCTUNDERLINEPEN_H_ */
