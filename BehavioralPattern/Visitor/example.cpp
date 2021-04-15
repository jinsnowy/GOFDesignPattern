
class ElementA;
class ElementB;

class Visitor
{
public:
	virtual void VisitElementA(ElementA*);
	virtual void VisitElementB(ElementB*);
protected:
	Visitor();
};

class Element
{
public:
	virtual ~Element();
	virtual void Accept(Visitor&) = 0;
protected:
	Element();
};

class ElementA : public Element
{
public:
	ElementA();
	virtual void Accept(Visitor& v)
	{
		v.VisitElementA(this);
	}
};

class ElementB : public Element
{
public:
	ElementB();
	virtual void Accept(Visitor& v)
	{
		v.VisitElementB(this);
	}
};

template<typename Item>
class List;

class CompositeElement : public Element
{
public:
	virtual void Accept(Visitor&);
private:
	List<Element*>* _children;
};

void CompositeElement::Accept(Visitor& v)
{
	ListIterator<Element*> i(_children);
	for (i.First(); !i.IsDone(); i.Next())
	{
		i.CurrentItem()->Accept(v);
	}
	v.VisitCompositeElement(this);
}