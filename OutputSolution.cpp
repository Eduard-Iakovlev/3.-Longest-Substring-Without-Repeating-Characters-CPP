#include "OutputSolution.h"
#include "Solution.h"
#include "CheckResult.h"

OutputSolution::OutputSolution(int example, int expected, string s) : example(example), expected(expected), s(s){}

void OutputSolution::run(){
	Solution solution;
	result = solution.lengthOfLongestSubstring(s);
}

void OutputSolution::print(){
	cout << "============ Test " << example << " ============" << endl;
	cout << "Input: " << s << endl;
	cout << "Expected: " << expected << endl;
	run();
	cout << "Output: " << result << endl;
	cout << "============ Check ============" << endl;
	cout << (check() ? "Success" : "Failed") << endl;
	cout << "================================\n" << endl;
}

bool OutputSolution::check(){
	CheckResult checkResult(expected, result);
	return checkResult.check();
}


