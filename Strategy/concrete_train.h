#pragma once

#include <iostream>
#include "abstract_strategy.h"

//Ϊ�˾����ӷ���������ʵ�ַ�ͬһ���ļ�
class train :public istrategy { // ���
public:
	virtual void travel() override {
		std::cout << "train travel" << std::endl;
	}
};
