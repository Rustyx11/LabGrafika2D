#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <set>
#include "Vector4d.h"
using namespace sf;
/**
 * @brief Obs�uga wej�cia
 */
class InputEngine
{
protected:
	std::map<int, Vector4d> keyClickArea; /*!<Mapa z przyciskami przypisanymi do obszaru w jakim mog� dzia�a�>*/
	std::map<int, void(*)()> keyActionContener;/*!<Mapa z przyciskami przypisanymi do odpowiednich funkcji>*/
	std::set<int> spamAbleKeys;/*!<Zbi�r przycisk�w spamuj�cych>*/
	bool spamButton;/*!<Zmienna czy jest przyciskiem spamuj�cym>*/
	int lastButton;/*!<Ostatni przycisk wci�ni�ty>*/
	/**
	 * @brief Wykonaj akcje
	 *
	 * \param eventHendler Wska�nik na obiekt z informacjami o odczytanych zdarzeniach
	 * \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	 */
	void doAction(Event* eventHendler, RenderWindow* window);

public:
	/**
	 * @brief Wykonuje akcje dla odczytanych zdarze�
	 *
	 * \param eventHendler Wska�nik na obiekt z informacjami o odczytanych zdarzeniach
	 * \param window Wska�nik do okna w kt�rym ma si� pojawi� figura
	 */
	virtual void pollEvent(Event* eventHendler, RenderWindow* window) = 0;
	/**
	 * @brief Rejestruje akcje
	 *
	 * \param key Przycisk
	 * \param func Wska�nik do funkcji po wci�ni�ciu przycisku
	 * \param spamAble Parametr czy mo�na spamowa�
	 */
	void registerNewAction(int key, void(*func)(), bool spamAble);
	/**
	 * @brief Rejestruje akcje
	 *
	 * \param key Przycisk
	 * \param func Wska�nik do funkcji po wci�ni�ciu przycisku
	 * \param px1 Punkt 1 na osi X
	 * \param py1 Punkt 1 na osi Y
	 * \param px2 Punkt 2 na osi X
	 * \param py2 Punkt 2 na osi Y
	 * \param spamAble Parametr czy mo�na spamowa�
	 */
	void registerNewActionInArea(int key, void(*func)(), int px1, int py1, int px2, int py2, bool spamAble);

	void reset();
};

