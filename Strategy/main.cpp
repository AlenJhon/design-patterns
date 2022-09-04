//#include <iostream>
//#include "if_else.h"
////代码没有根据工程规范来，只是方便举例子
//int main() {
//	my_travel mt;
//	mt.travel(travel_enum::BIKE);
//	mt.travel(travel_enum::CAR);
//	mt.travel(travel_enum::BUS);
//	mt.travel(travel_enum::TRAIN); //变更
//
//	return 0;
//}


// ************************************* strategy ************************************
#include "strategy_factory.h"
//#include "concrete_bike.h"
//#include "concrete_car.h"
//#include "concrete_bus.h"
//#include "concrete_train.h" 
#include "context.h"
 //代码没有根据工程规范来，只是方便举例子

int main() {
	//context ctx;
	//istrategy* stg = new bike;
	//ctx.set_strategy(stg);
	//ctx.travel();
	//delete stg;

	//stg = new car;
	//ctx.set_strategy(stg);
	//ctx.travel();
	//delete stg;

	//stg = new bus;
	//ctx.set_strategy(stg);
	//ctx.travel();
	//delete stg;
 //
	//stg = new train;
	//ctx.set_strategy(stg);
	//ctx.travel();
	//delete stg;

	//version 2
	context ctx;
	istrategy* stg = nullptr;
	for (auto xtravel : { travel_enum::BIKE, travel_enum::CAR, travel_enum::BUS, travel_enum::TRAIN })
	{
		stg = strategy_factory::create_strategy(xtravel);
		ctx.set_strategy(stg);
		ctx.travel();
		delete stg;
	}


	return 0;
}



//calculate 
//代码没有根据工程规范来，只是方便举例子
//#include <iostream>
//#include "calculate_concrete.h"
//
//int main() {
//	Add add;
//	add.set_left(100);
//	add.set_right(200);
//	std::cout << add.get_result() << std::endl;
//
//	Sub sub;
//	sub.set_left(5);
//	sub.set_right(10);
//	std::cout << sub.get_result() << std::endl;
//
//	Mul mul;
//	mul.set_left(5);
//	mul.set_right(10);
//	std::cout << mul.get_result() << std::endl;
//
//	Div div;
//	div.set_left(9);
//	div.set_right(3);
//	std::cout << div.get_result() << std::endl;
//
//
//	return 0;
//}