#include "Engine.h"


// funkcje prywatne
void Engine::initVariables()
{
	this->window = nullptr;
}

void Engine::initWindow()
{
	this->videoMode.height = windowHeight;
	this->videoMode.width = windowWidth;
	this->window = new sf::RenderWindow(this->videoMode, "Game", sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(frameRateLimit);
}



//Konstruktor /Destruktor
Engine::Engine()
{
	this->initVariables();
	this->initWindow();
}

Engine::~Engine()
{
	delete this->window;
}

const bool Engine::running() const
{
	return this->window->isOpen();
}

//funkcje publiczne

void Engine::pollEvents()
{
	while (this->window->pollEvent(this->event))
	{
		switch (this->event.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->event.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}


void Engine::update()
{
	this->pollEvents();

	//Obliczanie FPS
	float currentTime = this->clock.restart().asSeconds();
	float fps = 1.0f / (currentTime);
	//std::cout << "fps: " << fps << std::endl;
	

	//pozycja myszy wzgledem okienka
	if (sf::Mouse::getPosition(*this->window).x>=0 && sf::Mouse::getPosition(*this->window).y >=0 && sf::Mouse::getPosition(*this->window).x <= this->windowWidth && sf::Mouse::getPosition(*this->window).y <= this->windowHeight)
	{
		xMousePosition = sf::Mouse::getPosition(*this->window).x;
		yMousePosition = sf::Mouse::getPosition(*this->window).y;
		std::cout << "Pozycja myszy: " << xMousePosition << " " << yMousePosition << "\n";
	}



	primitive.MakeLineAlgPrzyrost(20, 20, 300, 10);

	primitive.MakeCircle(300,300,50);
	//primitive.MakeElipse(300, 300, 50, 25);

	pointArray[0].SetCords(200, 200);
	pointArray[1].SetCords(320, 200);
	pointArray[2].SetCords(210, 250);
	pointArray[3].SetCords(320, 320);
	pointArray[4].SetCords(200, 320);

	primitive.MakeLineFromPoints(pointArray,5);

	pointArray[0].SetCords(400, 200);
	pointArray[1].SetCords(520, 200);
	pointArray[2].SetCords(410, 250);
	pointArray[3].SetCords(520, 320);
	pointArray[4].SetCords(400, 320);

	primitive.MakeShape(pointArray,5);

	lineS1.SetBegPoint(100,100);
	lineS1.SetEndPoint(300, 300);

	Point2D cen(300,300);

	primitive.floodfill(cen,sf::Color::Red);
	cen.SetCords(270,300);
	primitive.boundryfill(cen,sf::Color::Blue,sf::Color::White);

	primitive.MakeRectangle(Point2D(50,50),Point2D(150,150),sf::Color::Magenta);

}	

void Engine::render()
{
	this->window->clear(sf::Color::Blue);


	sf::Texture texture;
	texture.loadFromImage(primitive.image);
	sf::Sprite sprite;
	sprite.setTexture(texture, true);
	this->window->draw(sprite);
	primitive.ClearImage();
	this->window->display();
}

