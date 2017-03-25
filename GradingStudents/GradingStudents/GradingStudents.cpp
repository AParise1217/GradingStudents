// GradingStudents.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int tryRound(int inputVal) {
	//attempts to rount the input to the nearest multiple of 5, if the difference is less than 3

	if (inputVal < 38) {
		return inputVal;
	}

	int tryVal1 = inputVal + 1;
	int tryVal2 = inputVal + 2;

	if (tryVal1 % 5 == 0) {
		return tryVal1;
	}
	else if (tryVal2 % 5 == 0) {
		return tryVal2;
	}

	return inputVal;
}

int main() {
	int n;
	cin >> n;

	for (int a0 = 0; a0 < n; a0++) {
		int grade;
		cin >> grade;
		// your code goes here
		int curGrade = tryRound(grade);
		cout << curGrade;
		cout << "\n";
	}



	return 0;
}

