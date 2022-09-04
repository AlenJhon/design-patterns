#pragma once
#include "abstract_strategy.h"
#include "concrete_bike.h"
#include "concrete_bus.h"
#include "concrete_car.h"
#include "concrete_train.h"

enum class travel_enum
{
	BIKE,
	CAR,
	BUS,
	TRAIN  //±ä¸ü
};

class strategy_factory 
{
public:
	static istrategy* create_strategy(travel_enum etravel) 
	{
		if (travel_enum::BIKE == etravel)
		{
			return new bike;
		}
		else if (travel_enum::CAR == etravel)
		{
			return new car;
		}
		else if (travel_enum::BUS == etravel)
		{
			return new bus;
		}
		else if (travel_enum::TRAIN == etravel)
		{
			return new train;
		}
	}
};
