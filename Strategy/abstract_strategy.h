#pragma once

// 出行策略抽象类

class istrategy {
public:
	virtual ~istrategy(){}
	// 定义好接口并延迟到子类扩展
	virtual void travel() = 0;
};
