#pragma once
#include <iostream>

using namespace std;

class Card
{
private:
	int num;
	string col;
public:
	Card(int n, string c);
	string colour();
	int number();
	void print();
	~Card();
};

