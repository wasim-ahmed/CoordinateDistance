#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

double calDis(double,double,double,double);
int main()
{
	double lat1 = 41.507483 * (PI/180);;
	double long1 = -99.436554 * (PI/180);;
	double lat2 = 38.504048 * (PI/180);;
	double long2 = -98.315949 * (PI/180);;
	
	double distance;
	
	distance = calDis(lat1,long1,lat2,long2);
	cout<<"Distance is :"<<distance<<endl;
return 0;
}

double calDis(double lat1,double long1,double lat2,double long2)
{
	double diflat = lat2 - lat1;
	double diflong = long2 - long1;
	double a,c,d;
	double R = 6371;
	
	a = pow((sin(diflat/2)),2) + cos(lat1)*cos(lat2)* pow((sin(diflong/2)),2);
	c = 2* atan2( sqrt(a), sqrt(1-a));
	d = R*c;
	
	return d;
}