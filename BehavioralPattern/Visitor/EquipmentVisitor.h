#pragma once
class EquipmentVisitor
{
public:
	virtual ~EquipmentVisitor();

	virtual void VisitFloppyDisk(class FloppyDisk*);
	virtual void VisitCard(class Card*);
	virtual void VisitChassis(class Chassis*);
	virtual void VisitBus(class Bus*);
protected:
	EquipmentVisitor();
};

