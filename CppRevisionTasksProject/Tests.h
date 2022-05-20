#pragma once
#include "Tasks.h"

#define MIN_NUMBER 1
#define MAX_NUMBER 8

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {
	bool result = true;

	for (int x = MIN_NUMBER; x <= MAX_NUMBER; x++)
	{
		for (int y = MIN_NUMBER; y < MAX_NUMBER; y++)
		{
			if (task01(x, y, x, y + 1) != "YES") {
				result = false;
				goto lable;
			}
		}
	}

	for (int x = MIN_NUMBER; x <= MAX_NUMBER; x++)
	{
		for (int y = MIN_NUMBER; y < MAX_NUMBER; y++)
		{
			int d1 = rand() % MAX_NUMBER;
			int d2 = rand() % MAX_NUMBER;

			if (task01(x, y, x + d1, y + d2) != "NO") {
				result = false;
				goto lable;
			}
		}
	}

lable:
	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(4, 4, 5, 5) == "NO"
		&& task02(4, 4, 3, 3) == "NO"
		&& task02(4, 4, 3, 5) == "NO"
		&& task02(4, 4, 5, 3) == "NO"
		&& task02(4, 4, 7, 1) == "NO"
		&& task02(4, 4, 1, 7) == "NO"
		&& task02(4, 4, 1, 1) == "NO"
		&& task02(4, 4, 7, 7) == "NO"
		&& task02(4, 4, 4, 4) == "NO"
		&& task02(4, 4, 4, 1) == "YES"
		&& task02(4, 4, 4, 2) == "YES"
		&& task02(4, 4, 4, 3) == "YES"
		&& task02(4, 4, 4, 5) == "YES"
		&& task02(4, 4, 4, 6) == "YES"
		&& task02(4, 4, 4, 7) == "YES"
		&& task02(4, 4, 4, 8) == "YES"
		&& task02(4, 4, 1, 4) == "YES"
		&& task02(4, 4, 2, 4) == "YES"
		&& task02(4, 4, 3, 4) == "YES"
		&& task02(4, 4, 5, 4) == "YES"
		&& task02(4, 4, 6, 4) == "YES"
		&& task02(4, 4, 7, 4) == "YES"
		&& task02(4, 4, 8, 4) == "YES";

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(5, 3, 5, 5) == "NO"
		&& task03(5, 3, 3, 3) == "NO"
		&& task03(5, 3, 5, 3) == "NO"
		&& task03(5, 3, 3, 5) == "NO"
		&& task03(5, 3, 7, 1) == "NO"
		&& task03(5, 3, 1, 7) == "NO"
		&& task03(5, 3, 3, 1) == "NO"
		&& task03(5, 3, 7, 5) == "NO"
		&& task03(5, 3, 7, 3) == "NO"
		&& task03(5, 3, 5, 4) == "YES"
		&& task03(5, 3, 5, 2) == "YES"
		&& task03(5, 3, 6, 3) == "YES"
		&& task03(5, 3, 4, 3) == "YES"
		&& task03(5, 3, 4, 2) == "YES"
		&& task03(5, 3, 4, 4) == "YES"
		&& task03(5, 3, 6, 2) == "YES"
		&& task03(5, 3, 6, 4) == "YES";


	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(6, 4, 5, 4) == "NO"
		&& task04(6, 4, 6, 4) == "NO"
		&& task04(6, 4, 7, 4) == "NO"
		&& task04(6, 4, 6, 3) == "NO"
		&& task04(6, 4, 6, 5) == "NO"
		&& task04(6, 4, 8, 2) == "YES"
		&& task04(6, 4, 7, 3) == "YES"
		&& task04(6, 4, 4, 6) == "YES"
		&& task04(6, 4, 3, 7) == "YES"
		&& task04(6, 4, 2, 8) == "YES"
		&& task04(6, 4, 3, 1) == "YES"
		&& task04(6, 4, 4, 2) == "YES"
		&& task04(6, 4, 5, 3) == "YES"
		&& task04(6, 4, 7, 5) == "YES"
		&& task04(6, 4, 8, 6) == "YES"
		&& task04(6, 4, 5, 5) == "YES";

	cout << "Task 04 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(6, 4, 5, 2) == "NO"
		&& task05(6, 4, 6, 4) == "NO"
		&& task05(6, 4, 2, 6) == "NO"
		&& task05(6, 4, 1, 1) == "NO"
		&& task05(6, 4, 8, 8) == "NO"
		&& task05(6, 4, 3, 6) == "NO"
		&& task05(6, 4, 4, 5) == "NO"
		&& task05(6, 4, 5, 7) == "NO"
		&& task05(6, 4, 8, 3) == "NO"
		&& task05(6, 4, 8, 2) == "YES"
		&& task05(6, 4, 7, 3) == "YES"
		&& task05(6, 4, 5, 5) == "YES"
		&& task05(6, 4, 4, 6) == "YES"
		&& task05(6, 4, 3, 7) == "YES"
		&& task05(6, 4, 2, 8) == "YES"
		&& task05(6, 4, 3, 1) == "YES"
		&& task05(6, 4, 4, 2) == "YES"
		&& task05(6, 4, 5, 3) == "YES"
		&& task05(6, 4, 7, 5) == "YES"
		&& task05(6, 4, 8, 6) == "YES"
		&& task05(6, 4, 5, 4) == "YES"
		&& task05(6, 4, 4, 4) == "YES"
		&& task05(6, 4, 3, 4) == "YES"
		&& task05(6, 4, 2, 4) == "YES"
		&& task05(6, 4, 1, 4) == "YES"
		&& task05(6, 4, 7, 4) == "YES"
		&& task05(6, 4, 8, 4) == "YES"
		&& task05(6, 4, 6, 3) == "YES"
		&& task05(6, 4, 6, 2) == "YES"
		&& task05(6, 4, 6, 1) == "YES"
		&& task05(6, 4, 6, 6) == "YES"
		&& task05(6, 4, 6, 7) == "YES"
		&& task05(6, 4, 6, 8) == "YES"
		&& task05(6, 4, 6, 5) == "YES";


	cout << "Task 05 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {

	bool result = task06(3, 6, 5, 3) == "NO"
		&& task06(3, 6, 3, 6) == "NO"
		&& task06(3, 6, 7, 5) == "NO"
		&& task06(3, 6, 8, 6) == "NO"
		&& task06(3, 6, 5, 4) == "NO"
		&& task06(3, 6, 7, 4) == "NO"
		&& task06(3, 6, 6, 3) == "NO"
		&& task06(3, 6, 6, 5) == "NO"
		&& task06(3, 6, 1, 5) == "YES"
		&& task06(3, 6, 2, 4) == "YES"
		&& task06(3, 6, 4, 4) == "YES"
		&& task06(3, 6, 5, 5) == "YES"
		&& task06(3, 6, 5, 7) == "YES"
		&& task06(3, 6, 4, 8) == "YES"
		&& task06(3, 6, 2, 8) == "YES"
		&& task06(3, 6, 1, 7) == "YES";

	cout << "Task 06 " << (result ? RIGHT : WRONG) << endl;
}