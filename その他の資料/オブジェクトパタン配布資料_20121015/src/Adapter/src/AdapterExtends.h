/**********************************************************************************************************************
 Create        : 2012/10/12
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef ADAPTER_H_
#define ADAPTER_H_

#include "Target.h"
#include "Adaptee.h"

class AdapterExtends : Target,private Adaptee{
public:
	AdapterExtends(void);						//-- コンストラクタ
	virtual void Request(void);			//-- リクエスト
};

#endif /* ADAPTER_H_ */
