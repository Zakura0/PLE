#pragma once
class ListElement
{
	int number;
	ListElement* nextElement = 0;

public:	

	ListElement()
	{

	}

	ListElement(int _number)
	{
		number = _number;
	}

	void SetNextElement(ListElement* _nextElement)
	{
		nextElement = _nextElement;
	}

	ListElement* GetNextElement()
	{
		return nextElement;
	}

	int GetNumber()
	{
		return number;
	}
};

