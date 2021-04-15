#pragma once
class Card : public Equipment
{
public:
	Card();
	Card(const char*);
	virtual Watt Power();
	virtual Currency NetPrice();
	virtual Currency DiscountPrice();
};

