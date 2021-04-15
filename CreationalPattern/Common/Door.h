#pragma once
#include "MapSite.h"
#include "Room.h"

class Door : public MapSite
{
private:
	// ����
	bool _isOpen;
	// �����ϴ� �� ��
	Room* _room1;
	Room* _room2;
public:
	// ���� �ʱ�ȭ�ϱ� ���ؼ��� ���� ��� �� ���̿� �ִ��� �˾ƾ��Ѵ�.
	Door();
	Door(const Door&);
	Door(Door*, Door*);
	Door(Room*, Room*);
	virtual void Initialize(Room*, Room*);
	virtual void Enter();
	Room* OtherSideFrom(Room*);
	// ������Ÿ���� ���� Clone �޼���
	virtual Door* Clone() const;
};

