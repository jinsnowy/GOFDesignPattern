#pragma once
#include "CompositeEquipment.h"
class Chassis : public CompositeEquipment {
public:
	Chassis(const char*);
	virtual ~Chassis();
	virtual Watt Power();
	virtual Currency NetPrice();
	virtual Currency DiscountPrice();
};

class Cabinet : public CompositeEquipment {
public:
	Cabinet(const char*);
	virtual ~Cabinet();
	virtual Watt Power();
	virtual Currency NetPrice();
	virtual Currency DiscountPrice();
};

class Bus : public CompositeEquipment {
public:
	Bus(const char*);
	virtual ~Bus();
	virtual Watt Power();
	virtual Currency NetPrice();
	virtual Currency DiscountPrice();
};