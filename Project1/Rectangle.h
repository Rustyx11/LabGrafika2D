#pragma once
#include "ShapeObject.h"

#include "Point2D.h"

#include "PrimitiveRenderer.h"


/**
 * @brief Klasa do stworzenia prostok�ta
 */
class Rectangle :public ShapeObject
{
public:

	/**
	 * @brief Konstruktor prostok�ta
	 *
	 * \param position Pozycja
	 * \param xSize Rozmiar X
	 * \param ySize Rozmiar Y
	 * \param border Kolor obram�wki
	 * \param fill Wype�nienie kolorem figury
	 * \param thickness Grubo�� obramowania
	 */
	Rectangle(Point2D position, int xSize, int ySize, Color border, Color fill, int thickness);
	/**
	 * @brief Rysuje obiekty
	 *
	 * \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	 */
	void draw(RenderWindow* window);
	/**
	 * @brief Przesuwa o wsp�rz�dne
	 *
	 * \param x Wspo�rz�dna na osi X
	 * \param y	Wspo�rz�dna na osi Y
	 */
	void translate(int x, int y);
	/**
	 * @brief Rotacja wzgledem podanych punkt�w
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param angle K�t o jaki ma sie przemie�ci� figura
	 */
	void rotate(int px, int py, int angle);
	/**
	 * @brief Rotacja wzgl�dem punktu 0,0
	 *
	 * \param angle K�t o jaki ma sie przemie�ci� figura
	 */
	void rotate(int angle);
	/**
	 * @brief Skalowanie wzgl�dem zadanego punktu
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	void scale(int px, int py, float kx, float ky);
	/**
	 * @brief Skalowanie wzgl�dem danej figury
	 *
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	void scale(float kx, float ky);

};

