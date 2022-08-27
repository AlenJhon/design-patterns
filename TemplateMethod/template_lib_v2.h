#pragma once
#include <iostream>

// 程序基础服务开发人员代码
class library {
public:
	library(){}
	virtual ~library(){}

	// 定义并实现好稳定的三个步骤
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

	virtual bool step2() = 0; // 纯虚函数要求子类必须要实现，给子类预留扩展，应对变化
	virtual bool step4() = 0; // 纯虚函数要求子类必须要实现，给子类预留扩展，应对变化

	
	// 定义好整个程序的运行流程
	void run() {
		step1();
		if (step2()) {// 子类扩展变化
			step3();
		}
		for (size_t i = 0; i < 5; i++) {
			step4();// 子类扩展变化
		}
		step5();
	}
};
