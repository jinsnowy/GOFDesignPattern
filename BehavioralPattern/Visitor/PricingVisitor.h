#pragma once
#include "EquipmentVisitor.h"
class PricingVisitor : public EquipmentVisitor
{
public:
	PricingVisitor();

	// ��ü ������ ����ϴ� �湮��
	class Currency& GetTotalPrice();

	virtual void VisitFloppyDisk(FloppyDisk*);
	virtual void VisitCard(Card*);
	virtual void VisitChassis(Chassis*);
	virtual void VisitBus(Bus*);
private:
	Currency _total;
};

