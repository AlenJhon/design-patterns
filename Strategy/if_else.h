#pragma once
#include <iostream>

// 为了举例子方便声明和实现放同一个文件

enum class travel_enum
{
	BIKE,
	CAR,
	BUS,
	TRAIN  //变更
};


class my_travel {
public:
	void travel(travel_enum te) {
		if (travel_enum::BIKE == te) {
			//do something
			std::cout << "bike travel" << std::endl;
		}
		else if (travel_enum::CAR == te) {
			//do something
			std::cout << "car travel" << std::endl;
		}
		else if (travel_enum::BUS == te) {
			//do something
			std::cout << "bus travel" << std::endl;
		}
		else if (travel_enum::TRAIN == te) { //变更
			//do something
			std::cout << "train travel" << std::endl;
		}
		// ...
	}
};


