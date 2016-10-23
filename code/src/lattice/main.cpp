#include <iostream>
#include <conio.h>

#include "fparser.h"



int main(int argc, char ** argv) {

	// ��� �������������, ����� ����� ���� �������� ������� Eval
	FunctionParser parser; // ������� ������ - ��������� ������ FunctionParser
	parser.Parse("x^2 + y^2 + z^2", "x,y,z"); // �������� ��� �� ��������� ��� ��� �������
	if (parser.EvalError()) // �����, ����� ��������� �� �������� � ������ ������, �.�. ������� �������� ������������ �������
	{
		printf("parse error\n");
		return false;
	}

	const float values[3] { 2.0, 2.0, 2.0 };
	
	std::cout << parser.Eval(values); // ����� ��������� �������� �������, ��������� �������� x, y � z
	_getch();

	return 0;
}