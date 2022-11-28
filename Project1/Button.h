#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include <iostream>
#include "BitmapObject.h"
#include "UpdatableObject.h"
#include "BitmapHandler.h"
#include "TransformableObject.h"
using namespace sf;
/**
 * @brief Klasa przycisk�w
 *
 */
class Button : public BitmapObject, UpdatableObject
{
private:
	//Texture texture;/*!<Tekstura przycisku>*/
	//Sprite body;/*!<>Cia�o przycisku*/

public:

	/**
	 * @brief konstruktor inicjuj�cy przycisk
	 *
	 * @param path �cie�ka do textury przycisku
	 * @param position pozycja na ekranie przycisku
	 */
	Button(BitmapHandler* bitmapHandler, std::string bitmapName, Vector2f position);
	/**
	 * @brief Wykrywanie wcisni�cia przycisku
	 *
	 * @param window referencja do okna aplikacji
	 * @return true je�eli przycisk zosta� wci�ni�ty
	 * @return false je�eli przycisk nie zosta� wci�ni�ty
	 */
	bool PressDetection(const RenderWindow& window);
	/**
	 * @brief Skalowanie rozmiaru przycisku o zadan� Warto��
	 *
	 * @param x skalowanie na osi x
	 * @param y skalowanie na osi y
	 */
	 //void setScale(double x, double y);
	 /**
	  * @brief aktualizowanie stanu przycisku
	  *
	  */
	void update(RenderWindow* window);
	/**
	 * @brief wy�wietlanie przycisku na ekranie
	 *
	 * @param target wska�nik na okno gry
	 */
	void draw(RenderWindow* target);
	/**
	 * @brief Przesuwa o wsp�rz�dne
	 *
	 * \param x Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi X
	 * \param y Referencje do zmiennej zawieraj�cej warto�� pocz�tkow� punktu oraz miejsce w kt�rym zostana zapisane wyniki dzia�ania metody na osi Y
	 */
	void translate(int x, int y);
	/**
	 * @brief Rotuje obiekt wzgl�dem punkt�w
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param angle K�t o jaki ma si� rotowa� obiekt
	 */
	void rotate(int px, int py, int angle);
	/**
	 * @brief Rotuj obiekt
	 *
	 * \param angle K�t o jaki ma si� rotowa� obiekt
	 */
	void rotate(int angle);
	/**
	 * @brief Skalowanie obiektu wzgl�dem podanych punkt�w
	 *
	 * \param px Wspo�rz�dna punktu na osi X
	 * \param py Wspo�rz�dna punktu na osi Y
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	void scale(int px, int py, float kx, float ky);
	/**
	 * @brief Skalowanie obiektu wzgl�dem punkt�w 0,0
	 *
	 * \param kx Wsp�czynnik skalowania na osi X
	 * \param ky Wsp�czynnik skalowania na osi Y
	 */
	void scale(float kx, float ky);
};

