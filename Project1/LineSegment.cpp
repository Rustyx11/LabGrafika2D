#include "LineSegment.h"

LineSegment::LineSegment()
{
}

LineSegment::~LineSegment()
{
}

int LineSegment::BPx()
{
	return begPoint.xcord;
}

int LineSegment::BPy()
{
	return begPoint.ycord;
}

int LineSegment::EPx()
{
	return endPoint.xcord;
}

int LineSegment::EPy()
{
	return endPoint.ycord;
}

void LineSegment::SetBegPoint(int x, int y)
{
	begPoint.SetCords(x, y);
}

void LineSegment::SetEndPoint(int x, int y)
{
	endPoint.SetCords(x, y);
}

void LineSegment::translate(int x, int y)
{
	TransformableObject::translate(begPoint.ReadXCordsRef(), begPoint.ReadYCordsRef(), x, y);
	TransformableObject::translate(endPoint.ReadXCordsRef(), endPoint.ReadYCordsRef(), x, y);
}

void LineSegment::rotate(int px, int py, int angle)
{
	TransformableObject::rotate(begPoint.ReadXCordsRef(), begPoint.ReadYCordsRef(), px, py, angle);
	TransformableObject::rotate(endPoint.ReadXCordsRef(), endPoint.ReadYCordsRef(), px, py, angle);
}

void LineSegment::rotate(int angle)
{
	TransformableObject::rotate(begPoint.ReadXCordsRef(), begPoint.ReadYCordsRef(), 0, 0, angle);
	TransformableObject::rotate(endPoint.ReadXCordsRef(), endPoint.ReadYCordsRef(), 0, 0, angle);
}

void LineSegment::scale(int px, int py, float kx, float ky)
{
	TransformableObject::scale(begPoint.ReadXCordsRef(), begPoint.ReadYCordsRef(), px, py, kx, ky);
	TransformableObject::scale(endPoint.ReadXCordsRef(), endPoint.ReadYCordsRef(), px, py, kx, ky);
}

void LineSegment::scale(float kx, float ky)
{
	TransformableObject::scale(begPoint.ReadXCordsRef(), begPoint.ReadYCordsRef(), 0, 0, kx, ky);
	TransformableObject::scale(endPoint.ReadXCordsRef(), endPoint.ReadYCordsRef(), 0, 0, kx, ky);
}
