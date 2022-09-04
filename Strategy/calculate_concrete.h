#pragma once

#include "calculator_abstract.h"

//代码没有根据工程规范来，只是方便举例子
class Add :public calculator_abstract {
public:
	virtual int get_result() override {
		return a + b;
	}
};

class Sub :public calculator_abstract {
public:
	virtual int get_result() override {
		return a - b;
	}
};

class Mul :public calculator_abstract {
public:
	virtual int get_result() override {
		return a * b;
	}
};

class Div :public calculator_abstract {
public:
	virtual int get_result() override {
		if (b == 0) {
			// ...
			return 0;
		}
		return a / b;
	}
};