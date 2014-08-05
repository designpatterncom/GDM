/**********************************************************************************************************************
 Create        : 2012/10/11
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include"mytype.h"

class Singleton {
public:
	Singleton(void);				//-- �R���X�g���N�^
	static Singleton* GetInstance(void);	//-- �C���X�^���X�擾
	static void show(void);				//-- �\��
private:
	static Singleton* SingltonPtr;
	int dummy0;
	int dummy1;
	void ShowPrivate(void);				//-- �\��
};

#endif /* SINGLETON_H_ */
