#include "Card.h"
#include <string>
#include <iostream>

using namespace std;

Card::Card(int n, string c)
{
	num = n;
	col = c;
}

string Card::colour() {
	return col;
}

int Card::number() {
	return num;
}

void Card::print() {
	cout << Card::colour() << " " << Card::number();
}

Card::~Card()
{
}
