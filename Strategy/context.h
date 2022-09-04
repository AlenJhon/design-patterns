#pragma once
#include "abstract_strategy.h"

// 使用到策略模式的上下文
// 新加出行策略无需修改到该文件
class context {
private:
	istrategy* stg = nullptr;
public:
	void set_strategy(istrategy* in_stg) {
		stg = in_stg;
	}
	void travel() {
		stg->travel(); //运行时通过set_strategy决定执行策略
	}
};
