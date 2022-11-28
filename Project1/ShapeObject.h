#pragma once
#include "DrawableObject.h"
#include "TransformableObject.h"
#include "Point2D.h"
/**
* @brief Klasa, po kt�rej dziedzicz� primitywy
*/
class ShapeObject : public DrawableObject, TransformableObject
{
protected:
	Point2D position;/*!<Pozycja>*/
	int xSize;/*!<Rozmiar X>*/
	int ySize;/*!<Rozmiar Y>*/
	Color border;/*!<Kolor obram�wki>*/
	Color fill;/*!< Wype�nienie kolorem figury >*/
	int thickness;/*!<Grubo�� obramowania>*/
public:
	/**
	* @brief Rysowanie obiektu
	*
	* \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	*/
	virtual void draw(RenderWindow* window) = 0;
	/**
	 * @brief Przesuni�cie obiektu
	 *
	 * \param x Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi X
	 * \param y Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi Y
	 */
	virtual void translate(int x, int y) = 0;
	/**
	 * @brief Obr�cenie obiektu wzgl�dem punkt�w
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param angle K�t o jaki ma si� rotowa� obiekt
	 */
	virtual void rotate(int px, int py, int angle) = 0;
	/**
	 * @brief Obr�cenie obiektu
	 *
	 * \param angle K�t o jaki ma si� rotowa� obiekt
	 */
	virtual void rotate(int angle) = 0;
	/**
	 * @brief Skalowanie obiektu wzgl�dem podanych punkt�w
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	virtual void scale(int px, int py, float kx, float ky) = 0;
	/**
	 * @brief Skalowanie obiektu wzgl�dem punkt�w 0,0
	 *
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	virtual void scale(float kx, float ky) = 0;
};

