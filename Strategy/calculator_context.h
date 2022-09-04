#pragma once
#include "calculator_abstract.h"

//代码没有根据工程规范来，只是方便举例子
class calculator_context {
	calculator_abstract* stg;
public:
	void set_strategy(calculator_abstract* cal_abstract) {
		stg = cal_abstract;
	}
	int execute_calc() {
		if (!stg) {
			return 0; // 做一些异常处理
		}
		return stg->get_result();
	}
};