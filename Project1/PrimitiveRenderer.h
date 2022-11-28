#pragma once

#include <stack>
#include "Header.h"
#include "LineSegment.h"
#include "Point2D.h"

class PrimitiveRenderer
{
public:
	

	//zmienne:
	
	sf::Image image;
	sf::Image blank;
	

	//sf::CircleShape DrawCircle;

	int numOfpixels;

	//metody
	PrimitiveRenderer();
	~PrimitiveRenderer();

	
	//dzialajace
	void floodfill(Point2D start, sf::Color filcolor);
	void boundryfill(Point2D start, sf::Color filcolor, sf::Color borderColor);
	void MakePoint(Point2D point);
	bool isColision(Point2D& p1, Point2D& p2, Point2D& p3, Point2D& p4);
	void MakeLineAlgPrzyrost(int x0, int y0, int x1, int y1);
	void MakeLineFromPoints(Point2D point2D[],int numberOfPoints);
	void MakeCircle(int xc, int yc, float r);
	void MakeElipse(int xc, int yc, float rx, float ry);
	void MakeShape(Point2D point2D[], int numberOfPoints);
	void MakeRectangle(Point2D p1, Point2D p2);
	void MakeRectangle(Point2D p1, Point2D p2, sf::Color filcolor);
	void ClearImage();

};

