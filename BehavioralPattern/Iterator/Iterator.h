#pragma once

// Iterator Ŭ������ ��ȸ �������̽��� �����ϴ� �߻� Ŭ���� �Դϴ�.
template<class Item>
class Iterator
{
public:
	// �ݺ��ڸ� ù ��° ��ü�� ��ġ��ŵ�ϴ�.
	virtual void First() = 0;
	// �ݺ��ڸ� �� ���� ��ü�� ��ġ��ŵ�ϴ�.
	virtual void Next() = 0;
	// �� ������ �ִ� ��ü�� ���� ���� �� true�� ��ȯ�մϴ�.
	virtual bool IsDone() const = 0;
	// ���� ��ġ�� �ִ� ��ü�� ��ȯ�մϴ�.
	virtual Item CurrentItem() const = 0;
protected:
	Iterator();
};

