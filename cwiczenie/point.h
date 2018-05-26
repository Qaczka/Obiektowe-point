#pragma once

class point
{
	int cor_x=0;
	int cor_y=0;

public:
	point();
	point(int, int);

	void set_cor_x(int);
	void set_cor_y(int);

	void get_cor_x();
	void get_cor_y();

	void roznica_x(point);

	void roznica_dwoch_pkt(point, point);

};

