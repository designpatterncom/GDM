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
	Target(void){};							//-- コンストラクタ
	virtual void Request(void) = 0;				//-- リクエスト
	virtual ~Target(void){};					//-- デストラクタ
};

#endif /* TARGET_H_ */
