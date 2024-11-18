#pragma once
#include "ListElement.h"
#include <iostream>
using namespace std;
class List
{
	ListElement* firstElement;

public:

	List()
	{

	}

	void Insert(ListElement* _firstElement)
	{
		if (firstElement == 0)
		{
			firstElement = _firstElement;
		}
		else
		{
			_firstElement->SetNextElement(firstElement);
			firstElement = _firstElement;
		}
	}

	bool IsAlreadyAdded(int value)
	{
		if (firstElement != 0)
		{
			ListElement* temp = firstElement;
			while (temp->GetNextElement() != 0)
			{
				if (temp->GetNumber() == value)
				{
					cout << "The entered number is already part of the list.";
					return true;
				}
				temp = temp->GetNextElement();
			}
			if (temp->GetNumber() == value)
			{
				cout << "The entered number is already part of the list.";
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	void ReturnList()
	{
		if (firstElement != 0)
		{
			ListElement* temp = firstElement;
			while (temp->GetNextElement() != 0)
			{
				cout << temp->GetNumber() << " ";
				temp = temp->GetNextElement();
			}
			cout << temp->GetNumber();
		}
	}
};

