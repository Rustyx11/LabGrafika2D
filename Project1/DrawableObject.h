#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include "Header.h"
#include "GameObject.h"
using namespace sf;
/**
 * @brief Klasa obiekt�w do narysowania
 */
class DrawableObject : virtual public GameObject
{
public:
	/**
	 * @brief Rysuje obiekt
	 *
	 * \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	 */
	virtual void draw(RenderWindow* window) = 0;
};