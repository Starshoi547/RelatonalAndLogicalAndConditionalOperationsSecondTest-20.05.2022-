﻿/*	Задание 05. Chess & Queen
*
*	Шахматный ферзь (chess queen) ходит по диагонали, горизонтали или вертикали.
*	Даны две различные клетки шахматной доски, определите,
*	может ли ферзь попасть с первой клетки на вторую одним ходом.
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое,
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Программа должна вывести "YES", если из первой клетки (x1, y1) ходом ферзя
*	можно попасть во вторую (x2, y2) или "NO" в противном случае.
*
*	[Sample function input 1] (пример передаваемых в функцию параметров): 4 4 5 5
*	[Sample function output 1] (пример возвращаемого функцией результата): YES
*
*	[Sample function input 2] (пример передаваемых в функцию параметров): 4 4 5 8
*	[Sample function output 2] (пример возвращаемого функцией результата): NO
*/

#include "Tasks.h"

string task05(int x1, int y1, int x2, int y2) {
	return ((y1 == y2 && x1 != x2) || (x1 == x2 && y1 != y2) || (x1 == x2 && y2 == y1 ? NULL : (x2 > x1 ? (x2 - x1) : (x1 - x2)) == (y2 > y1 ? (y2 - y1) : (y1 - y2))) ? "YES" : "NO");
}