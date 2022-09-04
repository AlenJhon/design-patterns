#pragma once

//代码没有根据工程规范来，只是方便举例子
class calculator_abstract {
protected:
	int a;
	int b;
public:
	void set_left(int in_a) {
		a = in_a;
	}
	void set_right(int in_b) {
		b = in_b;
	}
	virtual int get_result() = 0;
};
