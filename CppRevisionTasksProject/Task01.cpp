/*	������� 01. Chess & Pawn
*
*	��������� ����� (chess pawn) - ��� ����� ������ ��������� ������,
*	�� ����� ������������ �� ��� ��������� ������ ����� ������.
*	����������� ����� ����� ������ ����� �� ��������� � ������ �� ���� ������.
*	���� ��� ��������� ������ ��������� �����, ����������,
*	����� �� ����� ������� � ������ ������ �� ������ ����� �����.
*
*	������ ������� ������ [input]
*	������� ��������� �� ���� ������ ����� �� 1 �� 8 ������,
*	�������� ����� ������� � ����� ������ ������� ��� ������ ������ (x1, y1),
*	����� ��� ������ ������ (x2, y2), ��� x - ���������� �� �����������,
*	� y - ���������� �� ���������.
*
*	������ �������� ������ [output]
*	��������� ������ ������� "YES", ���� �� ������ ������ (x1, y1) ����� �����
*	����� ������� �� ������ (x2, y2) ��� "NO" � ��������� ������.
*
*	[Sample function input 1] (������ ������������ � ������� ����������): 4 4 5 5
*	[Sample function output 1] (������ ������������� �������� ����������): NO
*
*	[Sample function input 2] (������ ������������ � ������� ����������): 4 4 4 5
*	[Sample function output 2] (������ ������������� �������� ����������): YES
*/

#include "Tasks.h"

string task01(int x1, int y1, int x2, int y2) {
	//cout << (y2 > y1 && x1 == x2 ? "YES" : "NO") << endl;
	return (y2 == y1+1 && x1 == x2 ? "YES" : "NO");
}