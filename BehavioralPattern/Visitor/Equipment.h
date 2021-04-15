#pragma once
class Watt;
class Currency;
class EquipmentVisitor;
class Equipment
{
public:
	virtual ~Equipment();

	// 방문자가 이용할 수 있는 인터페이스
	const char* Name() { return _name; }
	virtual Watt Power();
	virtual Currency NetPrice();
	virtual Currency DiscountPrice();

	// 방문자가 방문하도록 하는 연산
	virtual void Accept(EquipmentVisitor&);

protected:
	Equipment(const char*);
private:
	const char* _name;
};

