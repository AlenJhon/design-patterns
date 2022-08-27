#pragma once
#include <iostream>

// 程序基础服务开发人员代码
class library {
public:
	library(){}
	virtual ~library(){}

	void step1() {
		//do something
		std::cout << "library step1" << std::endl;
	}
	void step3() {
		//do something
		std::cout << "library step3" << std::endl;
	}
	void step5() {
		//do something
		std::cout << "library step5" << std::endl;
	}
};
