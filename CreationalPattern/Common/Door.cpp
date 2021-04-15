#include "Door.h"

Door::Door()
{
    _room1 = nullptr;
    _room2 = nullptr;
}
// 복사 생성자
Door::Door(const Door& other)
{
    _room1 = other._room1;
    _room2 = other._room2;
}
// 초기화 연산 (Set 메서드)
void Door::Initialize(Room* r1, Room* r2)
{
    _room1 = r1;
    _room2 = r2;
}

Door* Door::Clone() const
{
    // 복사 생성자 호출
    return new Door(*this);
}
