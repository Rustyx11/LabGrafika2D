#include "Point2D.h"

Point2D::Point2D()
{
	xcord = 0;
	ycord = 0;
	thickness = 1;
	color = sf::Color::White;
}

Point2D::Point2D(int xcord, int ycord)
{
	this->xcord = xcord;
	this->ycord = ycord;
	thickness = 1;
	color = sf::Color::White;
}

Point2D::Point2D(int xcord, int ycord, int thickness, sf::Color color)
{
	this->xcord = xcord;
	this->ycord = ycord;
	this->color = color;
	this->thickness = thickness;
}


Point2D::~Point2D()
{
}

int Point2D::ReadXCords()
{
	return xcord;
}

int Point2D::ReadYCords()
{
	return ycord;
}

int& Point2D::ReadXCordsRef()
{
	return xcord;
}

int& Point2D::ReadYCordsRef()
{
	return ycord;
}

void Point2D::SetCords(int x, int y)
{
	this->xcord = x;
	this->ycord = y;
}

void Point2D::swapPoints(Point2D& p1, Point2D& p2)
{
	Point2D image = p1;
	p1 = p2;
	p2 = image;
}

void Point2D::translate(int x, int y)
{
	this->xcord += x;
	this->ycord += y;
	TransformableObject::translate(this->xcord, this->ycord, x, y);
}

void Point2D::rotate(int px, int py, int angle)
{
	TransformableObject::rotate(xcord,ycord,px,py,angle);
}

void Point2D::rotate(int angle)
{
	TransformableObject::rotate(xcord, ycord, 0, 0, angle);
}

void Point2D::scale(int px, int py, float kx, float ky)
{
	xcord = (float)xcord * kx + (float)(1 - kx) * px;
	ycord = (float)ycord * ky + (float)(1 - ky) * py;
}

void Point2D::scale(float kx, float ky)
{
	xcord = (float)xcord * kx;
	ycord = (float)ycord * ky;
}


