#pragma once
#include "template_lib_v2.h"

// 上层应用逻辑程序代码
class application : public library {
public:
	application(){}
	virtual ~application(){}

	//重写父类方法 ，子类扩展变化
	virtual bool step2() override {
		//do something
		std::cout << "application step2" << std::endl;
		return true;
	}
	//重写父类方法 ，子类扩展变化
	virtual bool step4() override {
		//do something
		std::cout << "application step4" << std::endl;
		return true;
	}
};
