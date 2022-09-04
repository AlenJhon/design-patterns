#pragma once
#include <iostream>
#include "abstract_strategy.h"

//为了举例子方便声明和实现放同一个文件
class bike :public istrategy {
public:
	virtual void travel() override {
		std::cout << "bike travel" << std::endl;
	}
};
