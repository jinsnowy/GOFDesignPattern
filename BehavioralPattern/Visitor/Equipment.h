#pragma once
class Watt;
class Currency;
class EquipmentVisitor;
class Equipment
{
public:
	virtual ~Equipment();

	// �湮�ڰ� �̿��� �� �ִ� �������̽�
	const char* Name() { return _name; }
	virtual Watt Power();
	virtual Currency NetPrice();
	virtual Currency DiscountPrice();

	// �湮�ڰ� �湮�ϵ��� �ϴ� ����
	virtual void Accept(EquipmentVisitor&);

protected:
	Equipment(const char*);
private:
	const char* _name;
};

