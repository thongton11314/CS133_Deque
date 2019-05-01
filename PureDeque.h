#ifndef _PURE_DEQUE_
#define _PURE_DEQUE_

#include <deque>

template<class C>
class PureDeque
{
private:
	std::deque<C> underDeque;
	int count;
public:
	void addFront(C value)
	{
		underDeque.push_front(value);
		coun++;
	}

	void addBack(C value)
	{
		underDeque.push_back(value);
		coun++;
	}

	C removeFront()
	{
		C temp = underDeque.front();
		underDeque.pop_front();
		return temp;
	}

	C removeBack()
	{
		C temp = underDeque.back();
		underDeque.pop_back();
		return temp;
	}

	bool isEmpty()
	{
		return underDeque.empty();
	}
};
#endif