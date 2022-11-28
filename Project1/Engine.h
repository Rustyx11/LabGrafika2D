#pragma once

#include "Header.h"
#include "PrimitiveRenderer.h"
#include "Point2D.h"
#include "LineSegment.h"

class Engine
{
public:

	//Zmienne
	int windowWidth = 600;
	int windowHeight = 600;
	int frameRateLimit = 60;
	int xMousePosition = 0;
	int yMousePosition = 0;




	//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;
	sf::Clock clock;

	sf::Texture texture;
	sf::Sprite sprite;


	//PrimitiveRenderer
	PrimitiveRenderer primitive;
	Point2D pointArray[100];
	LineSegment lineS1;

	//funkcje prywate
	void initVariables();
	void initWindow();

	//Konstruktor /Destruktor
	Engine();
	~Engine();


	//
	const bool running() const;


	//Funkcje
	void pollEvents();
	void update();
	void render();
};




