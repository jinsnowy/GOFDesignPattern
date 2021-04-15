#pragma once
#include "EquipmentVisitor.h"
class PricingVisitor : public EquipmentVisitor
{
public:
	PricingVisitor();

	// 전체 가격을 계산하는 방문자
	class Currency& GetTotalPrice();

	virtual void VisitFloppyDisk(FloppyDisk*);
	virtual void VisitCard(Card*);
	virtual void VisitChassis(Chassis*);
	virtual void VisitBus(Bus*);
private:
	Currency _total;
};

