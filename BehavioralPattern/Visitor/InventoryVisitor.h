#pragma once
#include "EquipmentVisitor.h"
class InventoryVisitor :
    public EquipmentVisitor
{
public:
	InventoryVisitor();

	// ��ü ����� �����ϴ� �湮��
	class Inventory& GetInventory();

	virtual void VisitFloppyDisk(FloppyDisk*);
	virtual void VisitCard(Card*);
	virtual void VisitChassis(Chassis*);
	virtual void VisitBus(Bus*);
private:
	Inventory _inventory;
};

