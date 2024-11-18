#include <iostream>
#include <bitset> //Creating own bit vars
#include <stdlib.h> //Windows System Commands
#include <string>
#include "ListElement.h"
#include "List.h"
using namespace std;

bool isNumber(const string s)
{
	return(strspn(s.c_str(), "-.0123456789") == s.size());
}

int main()
{
	List list;
	string input;
	while (input != "x")
	{
		cin >> input;
		if (isNumber(input))
		{
			int i_input = stoi(input); //string to int
			system("CLS");
			if (!list.IsAlreadyAdded(i_input))
			{
				ListElement* element = new ListElement(i_input);
				list.Insert(element);				
			}
		}
		else if (input != "x")
		{
			system("CLS");
			cout << "Entry was not valid. (numbers only)" << endl;
		}		
	}
	system("CLS");
	cout << "The entered numbers have been added to the list." << endl;
	list.ReturnList();
	cin.get();
}
