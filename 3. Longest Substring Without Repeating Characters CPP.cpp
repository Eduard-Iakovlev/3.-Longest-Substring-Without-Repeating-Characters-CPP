#include <iostream>
#include <string>
#include "windows.h"
#include "OutputSolution.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	int example = 0;
	int expected;
	string s;
	OutputSolution outputSolution;

	example++;
	s = "abcabcbb";
	expected = 3;
	outputSolution = OutputSolution(example, expected, s);
	outputSolution.print();

	example++;
	s = "bbbbb";
	expected = 1;
	outputSolution = OutputSolution(example, expected, s);
	outputSolution.print();

	example++;
	s = "pwwkew";
	expected = 3;
	outputSolution = OutputSolution(example, expected, s);
	outputSolution.print();


}
