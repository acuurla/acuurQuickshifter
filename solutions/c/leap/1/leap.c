#include "leap.h"
bool leap_year(int year)
{
	if(year%4!=0) return false;
	else if(year%100==0&&year%400!=0) return false;
	else if(year%100==0&&year%400!=0) return false;
	else if(year%200==0&&year%3!=0) return true;
	else return true;
}
