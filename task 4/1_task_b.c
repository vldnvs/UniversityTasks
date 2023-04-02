#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int func(double x, double y);

void main() {
	// проверка (1, 1) - заштрихованная область
	double x = 1.;
	double y = 1.;
	printf("%d\n", func(x, y));
	
	//проверка внутри окружности
	 x = 5.;
	 y = 5.;
	printf("%d\n", func(x, y));

    //проверка точки на окружности
	x = 0.;
	y = 5.;
	printf("%d\n", func(x, y));

    //проверка точки на окружности
	x = 5.;
	y = 0.;
	printf("%d\n", func(x, y));
    
    //проверка за окружностью
	x = 10.;
	y = 10.;
	printf("%d\n", func(x, y));

    //проверка начала координат
	x = 0.;
	y = 0.;
	printf("%d\n", func(x, y));
	
    //идей больше нет :)
}

int func(double x, double y) {
	int res = pow((x - 5), 2) + (pow((y - 5), 2) > 25) && (x > 0) && (y > 0) && (x < 5) && (y < 5) ;
	return res;
}

