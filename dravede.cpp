#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std ;

typedef struct point 
{
	int x ;
	int y ;
}point;

typedef struct speed
{
	int x;
	int y ;
	int z ;
}speed;

int main()
{
	int n,i=0,f ;
	cin >> n ;
	point points[n] ;
	while(n--)
	{ 
		cin >> points[i].x ;
		cin >> points[i].y ;
        i++ ;
	}
	point a ;
	cin >> a.x >> a.y  ;
	speed v,u ;
	cin >> v.x >> v.y >> v.z ;
	cin >> f ;
	cin >> u.x >> u.y >> u.z ;

	return 0 ;
}