#include <stdio.h>
#include <stdbool.h>

int func(double x, double y);

void main() {
	// проверка (-5, 4)
	double x = -5.;
	double y = 4.;
	printf("%d\n", func(x, y));
	
	//проверка 3 четверти
	 x = -5.;
	 y = -5.;
	printf("%d\n", func(x, y));

    //проверка 2 четверти
	x = -3.;
	y = 1.;
	printf("%d\n", func(x, y));

    //проверка 1 четверти
	x = 5.;
	y = 5.;
	printf("%d\n", func(x, y));
    
    //проверка 4 четверти
	x = 2.;
	y = -7.;
	printf("%d\n", func(x, y));

    //проверка начала координат
	x = 0.;
	y = 0.;
	printf("%d\n", func(x, y));
	
	//проверка пунктирной линии у = 3
	x = 1.;
	y = 3.;
	printf("%d\n", func(x, y));
    
    //проверка пунктирной линии х = 4
	x = 4.;
	y = 1.;
	printf("%d\n", func(x, y));

    //проверка пересечения пунктирных линий
	x = 3.;
	y = 4.;
	printf("%d\n", func(x, y));
	
    
    	
	printf("Введите координаты для проверки\n");
	scanf("%lf", &x);
	scanf("%lf", &y);
	printf("%d\n", func(x, y));
	
	

    //идей больше нет :)
}

int func(double x, double y) {
	bool res = ((x <= 0) && (y <= 0)) || ((y <= -x) && (y < 3) && (y >= 0) && (x <= 0)) || ((y <= -x) && (y <= 0) && (x >= 0) && (x < 4)) || ((x > 4) && (y > 3)) || (y <= -x);
	return res;
}
