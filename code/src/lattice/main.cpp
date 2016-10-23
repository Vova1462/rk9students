#include <iostream>
#include <conio.h>

#include "fparser.h"



int main(int argc, char ** argv) {

	// Это приготовления, чтобы можно было вызывать функцию Eval
	FunctionParser parser; // Создать парсер - экземпляр класса FunctionParser
	parser.Parse("x^2 + y^2 + z^2", "x,y,z"); // Передать ему на обработку вот эту формулу
	if (parser.EvalError()) // Нужно, чтобы проверить на опечатки и прочие ошибки, т.к. функция задается произвольной строкой
	{
		printf("parse error\n");
		return false;
	}

	const float values[3] { 2.0, 2.0, 2.0 };
	
	std::cout << parser.Eval(values); // Здесь вычисляем значение функции, передавая массивом x, y и z
	_getch();

	return 0;
}