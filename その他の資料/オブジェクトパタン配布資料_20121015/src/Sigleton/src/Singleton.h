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
	Singleton(void);				//-- コンストラクタ
	static Singleton* GetInstance(void);	//-- インスタンス取得
	static void show(void);				//-- 表示
private:
	static Singleton* SingltonPtr;
	int dummy0;
	int dummy1;
	void ShowPrivate(void);				//-- 表示
};

#endif /* SINGLETON_H_ */
