#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include "GameObject.h"
/**
 * @brief Abstrakcyjna klasa do transformacji obiekt�w
 */
class TransformableObject : virtual public GameObject
{
public:
	/**
	 * @brief Przesuni�cie obiektu
	 *
	 * \param x Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi X
	 * \param y Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi Y
	 * \param xm Warto�ci o jakie maj� by� wykonane zmiany na osi X
	 * \param ym Warto�ci o jakie maj� by� wykonane zmiany na osi Y
	 */
	static void translate(int& x, int& y, int xm, int ym);
	/**
	 * @brief Obr�cenie obiektu
	 *
	 * \param x Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi X
	 * \param y Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi Y
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param angle K�t o jaki ma si� rotowa� obiekt
	 */
	static void rotate(int& x, int& y, int px, int py, int angle);
	/**
	 * @brief Skalowanie obiektu wzgl�dem podanych punkt�w
	 *
	 * \param x Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi X
	 * \param y Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi Y
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	static void scale(int& x, int& y, int px, int py, float kx, float ky);
	/**
	 * @brief Przesuwa o wsp�rz�dne
	 *
	 * \param x Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi X
	 * \param y Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi Y
	 */
	virtual void translate(int x, int y) = 0;
	/**
	 * @brief Rotuje obiekt wzgl�dem punkt�w
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param angle K�t o jaki ma si� rotowa� obiekt
	 */
	virtual void rotate(int px, int py, int angle) = 0;
	/**
	 * @brief Rotuj obiekt
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

