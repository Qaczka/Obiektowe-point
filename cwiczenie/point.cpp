#include "point.h"
#include <iostream>


point::point()
{
	std::cout << "Tworze kolejny obiekt..." << std::endl;
}

void point::set_cor_x(int a)
{
	cor_x = a;
}

void point::set_cor_y(int b)
{
	cor_y = b;
}

void point::get_cor_x()
{
	std::cout << "Coordinate x is: " <<  cor_x << std::endl;
}

void point::get_cor_y()
{
	std::cout << "Coordinate y is: " << cor_y << std::endl;
}

void point::roznica_x(point a)
{
	std::cout << "Roznica to: " << cor_x - a.cor_x << std::endl;
}

void point::roznica_dwoch_pkt(point a, point b)
{
	std::cout << "Roznica x to: " << a.cor_x - b.cor_x << "a roznica y to: " << a.cor_y - b.cor_y << std::endl;//bezsens bo po co wtedy obiektowosc
}