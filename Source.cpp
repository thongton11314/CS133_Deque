#include <iostream>
#include <string>
#include "PureDeque.h"

using namespace std;

int main()
{
	PureDeque<char> charDeque;
	string input = "hello world";

	for (int i = 0; i < input.length(); i++)
	{
		charDeque.addFront(input.at(i));
	}
	while (!charDeque.isEmpty())
	{
		cout << charDeque.removeFront();
	}

	cout << endl;
	for (int i = 0; i < input.length(); i++)
	{
		charDeque.addBack(input.at(i));
	}
	while (!charDeque.isEmpty())
	{
		cout << charDeque.removeFront();
	}
	getchar();
	return 0;
}