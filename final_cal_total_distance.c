#include "final_cal_total_distance.h"
double cal_distance(double latitude_1, double longitude_1, double latitude_2, double longitude_2) //function has 4 float inputs represent tow points in the coordinates 
	{
	double theta, distance;
		if ((latitude_1 == latitude_2) && (longitude_1 == longitude_2))
			return 0; //this means that you don't move so the total distance equal zero 
		else
		{
			
				theta = longitude_1 - longitude_2;
				distance = sin(convert_deg2rad(latitude_1)) * sin(convert_deg2rad(latitude_2)) + cos(convert_deg2rad(latitude_1)) * cos(convert_deg2rad(latitude_2)) * cos(convert_deg2rad(theta));
				distance = acos(distance);
				distance = convert_rad2deg(distance);
				distance = distance * 60 * 1.1515;
				distance = distance * 1.609344;
				distance = distance * 1000;
				return distance; //it will return distance (meter)
				
			
		}
	}
double  convert_deg2rad(double degree)   //function converts from degree to radian
	{
		return (degree * pi / 180);
	}
double convert_rad2deg(double radian)  //function converts from radian to degree
	{
		return (radian * 180 / pi);
	}
