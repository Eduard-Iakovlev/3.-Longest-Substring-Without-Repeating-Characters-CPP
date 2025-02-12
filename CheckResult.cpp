#include "CheckResult.h"

CheckResult::CheckResult(int expected, int result) : expected(expected), result(result) {}

bool CheckResult::check(){ return expected == result; }
