#pragma once
#include "DrawableObject.h"
#include <SFML/Graphics.hpp>

using namespace sf;
/**
 * @brief Klasa dla obiekt�w z bitmap�
 */
class BitmapObject : virtual public DrawableObject
{
protected:
	Texture texture/*!<Tekstura>*/;
public:
	/**
	 * @brief Rysuje obiekt
	 *
	 * \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	 */
	virtual void draw(RenderWindow* window) = 0;
};

