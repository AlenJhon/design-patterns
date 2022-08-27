#pragma once
#include <iostream>

// 上层应用逻辑程序代码
class application {
public:
	application(){}
	virtual ~application(){} 

	// 应用程序自行实现了两个步骤
	bool step2() {
		//do something
		std::cout << "application step2" << std::endl;
		return true;
	}
	bool step4() {
		//do something
		std::cout << "application step4" << std::endl;
		return true;
	}
};
