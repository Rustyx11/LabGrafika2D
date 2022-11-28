#pragma once
#include "Header.h"
#include "TransformableObject.h"
#include "DrawableObject.h"
#include <cmath>

class Point2D
{
public:
	//x y cordynates of point
	int xcord;
	int ycord;
	int thickness;
	sf::Color color;
	Point2D();
	Point2D(int xcord,int ycord);
	Point2D(int xcord,int ycord, int thickness, sf::Color color);
	~Point2D();

	int ReadXCords();
	int ReadYCords();
	int& ReadXCordsRef();
	int& ReadYCordsRef();
	void SetCords(int x, int y);
	static void swapPoints(Point2D& p1, Point2D& p2);
	void translate(int x, int y);
	void rotate(int px, int py, int angle);
	void rotate(int angle);
	void scale(int px, int py, float kx, float ky);
	void scale(float kx, float ky);
};

