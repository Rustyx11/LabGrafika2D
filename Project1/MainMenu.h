#pragma once

#include "Button.h"
#include <stack>
#include "BitmapHandler.h"
#include "BitmapObject.h"
#include "TransformableObject.h"

//using namespace sf;
/**
 * @brief Struktura stan闚 silnika gry
 *
 */
enum stateTitle { MAINMENU, GAME, DEMO, EXIT };
/**
 * @brief Klasa menu g堯wnego gry
 *
 */
class MainMenu : public BitmapObject
{
private:
	bool* gameModeChanged;
	std::stack<int>* gameState;
	Button* newGameButton;/*!<Przycisk New Game>*/
	Button* continueButton;/*!<Przycisk Continue>*/
	Button* exitButton;/*!<Przycisk Exit>*/
	Button* demoButton;
	//Texture backgroundTexture;/*!<Tekstura t豉 menu g堯wnego>*/
	//Sprite background;/*!<T這 menu g堯wnego>*/
public:
	/**
	* @brief Konstruktor inicjuj鉍y menu g堯wne
	*
	* @param screanSize
	*/
	MainMenu(BitmapHandler* bitmapHandler, std::stack<int>* gameState, Vector2f screanSize, bool* gameModeChanged);
	/**
	 * @brief Niszczenie menu g堯wnego
	 *
	 */
	~MainMenu();
	/**
	 * @brief Aktualizacja menu g堯wnego
	 *
	 * @param window wskaik do okna gry
	 * @param gameState referencja do stosu zawieraj鉍ego obecy stan silnika gry
	 * @param health 篡cie gracza
	 * @return true - je瞠li wcisni皻o przycisk newGame
	 * @return false - wpozosta造ch przypadkach
	 */
	void update(RenderWindow* window);
	/**
	 * @brief Wyietlanie menu g這wnego
	 *
	 * @param target wskaik na okno gry
	 */
	void draw(RenderWindow* window);
};

