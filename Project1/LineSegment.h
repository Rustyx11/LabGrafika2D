#pragma once

#include "Header.h"
#include "Point2D.h"
#include "DrawableObject.h"
#include "TransformableObject.h"

class LineSegment
{
public:
	Point2D begPoint;
	Point2D endPoint;

	LineSegment();
	~LineSegment();
	
	int BPx();
	int BPy();
	int EPx();
	int EPy();
	void SetBegPoint(int x, int y);
	void SetEndPoint(int x, int y);
	void translate(int x, int y);
	void rotate(int px, int py, int angle);
	void rotate(int angle);
	void scale(int px, int py, float kx, float ky);
	void scale(float kx, float ky);
};

