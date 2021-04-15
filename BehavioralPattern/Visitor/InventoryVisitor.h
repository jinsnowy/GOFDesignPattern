#pragma once
#include "EquipmentVisitor.h"
class InventoryVisitor :
    public EquipmentVisitor
{
public:
	InventoryVisitor();

	// 전체 재고량을 조사하는 방문자
	class Inventory& GetInventory();

	virtual void VisitFloppyDisk(FloppyDisk*);
	virtual void VisitCard(Card*);
	virtual void VisitChassis(Chassis*);
	virtual void VisitBus(Bus*);
private:
	Inventory _inventory;
};

