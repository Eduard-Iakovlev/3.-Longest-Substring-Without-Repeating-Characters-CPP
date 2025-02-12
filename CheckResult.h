#pragma once
class CheckResult{
public:
	
	CheckResult(int expected, int result);
	bool check();

private:
	int expected, result;	
};

