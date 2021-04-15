#include "PricingVisitor.h"

void PricingVisitor::VisitFloppyDisk(FloppyDisk* e)
{
	_total += e->NetPrice();
}

void PricingVisitor::VisitChassis(Chassis* e)
{
	_total += e->NetPrice();
}

