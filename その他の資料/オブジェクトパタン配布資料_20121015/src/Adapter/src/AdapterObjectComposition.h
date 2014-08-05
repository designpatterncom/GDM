/**********************************************************************************************************************
 Create        : 2012/10/12
 Author        : imamura
 Description   : 
 Maintenance   : 
 Copyright (C) 2012 Murata Machinery,Ltd. All rights reserved.
 **********************************************************************************************************************/

#ifndef ADAPTEROBJECTCOMPOSITION_H_
#define ADAPTEROBJECTCOMPOSITION_H_

#include "Target.h"
#include "Adaptee.h"

class AdapterObjectComposition : Target{
public:
	AdapterObjectComposition(void);
	virtual void Request(void);				//-- リクエスト
private:
	Adaptee adaptee;
};

#endif /* ADAPTEROBJECTCOMPOSITION_H_ */
