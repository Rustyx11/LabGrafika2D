#pragma once
#include "InputEngine.h"
/**
 * @brief Klasa myszy
 */
class MouseEngine :public InputEngine
{
public:
	/**
	 * @brief Wykonuje akcje dla odczytanych zdarze�
	 *
	 * \param eventHendler Wska�nik na obiekt z informacjami o odczytanych zdarzeniach
	 * \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	 */
	void pollEvent(Event* eventHendler, RenderWindow* window);
};

