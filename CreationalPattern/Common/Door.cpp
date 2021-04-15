#include "Door.h"

Door::Door()
{
    _room1 = nullptr;
    _room2 = nullptr;
}
// ���� ������
Door::Door(const Door& other)
{
    _room1 = other._room1;
    _room2 = other._room2;
}
// �ʱ�ȭ ���� (Set �޼���)
void Door::Initialize(Room* r1, Room* r2)
{
    _room1 = r1;
    _room2 = r2;
}

Door* Door::Clone() const
{
    // ���� ������ ȣ��
    return new Door(*this);
}
