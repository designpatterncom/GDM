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
	/* �������ɒǉ����ĉ����� */
	ProductKindEndPoint,
};

struct ProductMap {
	enum ProductKind kind;
	Product* proto;
};

class Manager {
public:
	Manager();														//-- �R���X�g���N�^
	bool SetProduct(enum ProductKind kind, Product* proto);			//-- Product�̓o�^
	Product* create(enum ProductKind kind);							//-- Product�̃N���[���擾
private:
	struct ProductMap	Pmap[PRODUCT_MAP];							//-- �v���_�N�g�ۑ��̈�
	uint32				PmapSaveNum;								//-- �v���_�N�g�ۑ���
};

#endif /* MANAGER_H_ */
