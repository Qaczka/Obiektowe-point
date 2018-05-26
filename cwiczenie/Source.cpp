#include <iostream>
#include "point.h"

using namespace std;

int main()
{
	point abc;

	abc.set_cor_x(6);
	abc.set_cor_y(8);


	abc.get_cor_x();
	abc.get_cor_y();

	point ab;
	ab.set_cor_x(10);
	ab.set_cor_y(7);

	ab.get_cor_x();
	ab.get_cor_y();

	ab.roznica_x(abc);



	system("PAUSE");
	return 0;
}