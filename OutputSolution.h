#pragma once
#include <iostream>
#include <string>	

using namespace std;

class OutputSolution{
public:
	OutputSolution() = default;
	OutputSolution(int example, int expected, string s);

	void run();
	void print();
	bool check();

private:
	int example, expected, result;
	string s;
};

