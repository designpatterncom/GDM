/**********************************************************************************************************************
 Create        : 2012/10/12
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef TARGET_H_
#define TARGET_H_

class Target {
public:
	Target(void){};							//-- �R���X�g���N�^
	virtual void Request(void) = 0;				//-- ���N�G�X�g
	virtual ~Target(void){};					//-- �f�X�g���N�^
};

#endif /* TARGET_H_ */
