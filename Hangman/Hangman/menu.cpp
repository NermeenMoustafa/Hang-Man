#include "menu.h"



menu::menu(float width,float height)
{
	
	if (!background.loadFromFile("images/background1.png"))
	{
		//error
	}
	backsprite.setTexture(background);
	if (!font.loadFromFile("fonts/pacfont.ttf"))
	{
		//erro
	}
	//*********************************************************
	if (!texture2.loadFromFile("images/button3.png"))
	{
		//error
	}
	//*********************************************************
	sf::IntRect catsprite(0,0,276,85);
	category[0].rect1.setSize(sf::Vector2f(250,80));
	category[0].rect1.setPosition(sf::Vector2f(170, 80));
	category[0].sprite1.setPosition(sf::Vector2f(160, 80));
	category[0].text.setString("Categories");
	category[0].text.setFont(font);
	category[0].text.setFillColor(sf::Color::Black);
	category[0].text.setCharacterSize(35);
	category[0].text.setPosition(sf::Vector2f(180, 95));
	if (!category[0].texture.loadFromFile("images/buttonc.png"))
	{
		std::cout << "Error categoy button " << std::endl;
	}
	category[0].sprite1.setTexture(category[0].texture);
	category[0].sprite1.setTextureRect(catsprite);
	//**********************************************************
	category[7].rect1.setSize(sf::Vector2f(250, 80));
	category[7].rect1.setPosition(sf::Vector2f(170, 600));
	category[7].sprite1.setPosition(sf::Vector2f(160,600));
	category[7].text.setString("Play");
	category[7].text.setFont(font);
	category[7].text.setFillColor(sf::Color::Black);
	category[7].text.setCharacterSize(50);
	category[7].text.setPosition(sf::Vector2f(230, 610));
	if (!category[7].texture.loadFromFile("images/buttonc.png"))
	{
		std::cout << "Error play button " << std::endl;
	}
	category[7].sprite1.setTexture(category[7].texture);
	category[7].sprite1.setTextureRect(catsprite);
	//**********************************************************
	sf::IntRect buttons(0, 0, 247, 107);
	category[1].rect1.setSize(sf::Vector2f(180, 50));
	category[1].rect1.setPosition(sf::Vector2f(350, 210));
	category[1].sprite1.setPosition(sf::Vector2f(320, 200));
	category[1].text.setString("Food");
	category[1].text.setFont(font);
	category[1].text.setFillColor(sf::Color::Black);
	category[1].text.setCharacterSize(40);
	category[1].text.setPosition(sf::Vector2f(375,220));
	if (!category[1].texture.loadFromFile("images/button2.png"))
	{
		std::cout << "Error categoy button " << std::endl;
	}
	category[1].sprite1.setTexture(category[1].texture);
	category[1].sprite1.setTextureRect(buttons);

	category[1].rect2.setSize(sf::Vector2f(180, 50));
	category[1].rect2.setPosition(sf::Vector2f(350, 210));
	category[1].sprite2.setTexture(texture2);
	category[1].sprite2.setTextureRect(buttons);
	category[1].sprite2.setPosition(sf::Vector2f(320, 200));
	//************************************************************
	
	category[2].rect1.setSize(sf::Vector2f(180, 50));
	category[2].rect1.setPosition(sf::Vector2f(50, 220));
	category[2].sprite1.setPosition(sf::Vector2f(20, 200));
	category[2].text.setString("Movies");
	category[2].text.setFont(font);
	category[2].text.setFillColor(sf::Color::Black);
	category[2].text.setCharacterSize(40);
	category[2].text.setPosition(sf::Vector2f(50, 220));
	if (!category[2].texture.loadFromFile("images/button2.png"))
	{
		std::cout << "Error play button " << std::endl;
	}
	category[2].sprite1.setTexture(category[2].texture);
	category[2].sprite1.setTextureRect(buttons);

	category[2].rect2.setSize(sf::Vector2f(180, 50));
	category[2].rect2.setPosition(sf::Vector2f(50, 220));
	category[2].sprite2.setTexture(texture2);
	category[2].sprite2.setTextureRect(buttons);
	category[2].sprite2.setPosition(sf::Vector2f(20, 200));

	//***********************************************************
	category[3].rect1.setSize(sf::Vector2f(180, 50));
	category[3].rect1.setPosition(sf::Vector2f(350, 310));
	category[3].sprite1.setPosition(sf::Vector2f(320,300));
	category[3].text.setString("Technology");
	category[3].text.setFont(font);
	category[3].text.setFillColor(sf::Color::Black);
	category[3].text.setCharacterSize(25);
	category[3].text.setPosition(sf::Vector2f(350, 330));
	if (!category[3].texture.loadFromFile("images/button2.png"))
	{
		std::cout << "Error categoy button " << std::endl;
	}
	category[3].sprite1.setTexture(category[3].texture);
	category[3].sprite1.setTextureRect(buttons);

	category[3].rect2.setSize(sf::Vector2f(180, 50));
	category[3].rect2.setPosition(sf::Vector2f(350, 310));
	category[3].sprite2.setTexture(texture2);
	category[3].sprite2.setTextureRect(buttons);
	category[3].sprite2.setPosition(sf::Vector2f(320, 300));

	//*************************************************************
	category[4].rect1.setSize(sf::Vector2f(180, 50));
	category[4].rect1.setPosition(sf::Vector2f(50, 320));
	category[4].sprite1.setPosition(sf::Vector2f(20, 300));
	category[4].text.setString("Country");
	category[4].text.setFont(font);
	category[4].text.setFillColor(sf::Color::Black);
	category[4].text.setCharacterSize(35);
	category[4].text.setPosition(sf::Vector2f(55, 325));
	if (!category[4].texture.loadFromFile("images/button2.png"))
	{
		std::cout << "Error categoy button " << std::endl;
	}
	category[4].sprite1.setTexture(category[4].texture);
	category[4].sprite1.setTextureRect(buttons);

	category[4].rect2.setSize(sf::Vector2f(180, 50));
	category[4].rect2.setPosition(sf::Vector2f(50, 320));
	category[4].sprite2.setTexture(texture2);
	category[4].sprite2.setTextureRect(buttons);
	category[4].sprite2.setPosition(sf::Vector2f(20, 300));
	//************************************************************
	category[5].rect1.setSize(sf::Vector2f(180, 50));
	category[5].rect1.setPosition(sf::Vector2f(350, 410));
	category[5].sprite1.setPosition(sf::Vector2f(320, 400));
	category[5].text.setString("Shopping");
	category[5].text.setFont(font);
	category[5].text.setFillColor(sf::Color::Black);
	category[5].text.setCharacterSize(30);
	category[5].text.setPosition(sf::Vector2f(350, 430));
	if (!category[5].texture.loadFromFile("images/button2.png"))
	{
		std::cout << "Error categoy button " << std::endl;
	}
	category[5].sprite1.setTexture(category[5].texture);
	category[5].sprite1.setTextureRect(buttons);

	category[5].rect2.setSize(sf::Vector2f(180, 50));
	category[5].rect2.setPosition(sf::Vector2f(350, 410));
	category[5].sprite2.setTexture(texture2);
	category[5].sprite2.setTextureRect(buttons);
	category[5].sprite2.setPosition(sf::Vector2f(320, 400));
	//**********************************************************
	category[6].rect1.setSize(sf::Vector2f(180, 50));
	category[6].rect1.setPosition(sf::Vector2f(50, 420));
	category[6].sprite1.setPosition(sf::Vector2f(20, 400));
	category[6].text.setString("Random");
	category[6].text.setFont(font);
	category[6].text.setFillColor(sf::Color::Black);
	category[6].text.setCharacterSize(35);
	category[6].text.setPosition(sf::Vector2f(55, 425));
	if (!category[6].texture.loadFromFile("images/button2.png"))
	{
		std::cout << "Error categoy button " << std::endl;
	}
	category[6].sprite1.setTexture(category[6].texture);
	category[6].sprite1.setTextureRect(buttons);

	category[6].rect2.setSize(sf::Vector2f(180, 50));
	category[6].rect2.setPosition(sf::Vector2f(50, 420));
	category[6].sprite2.setTexture(texture2);
	category[6].sprite2.setTextureRect(buttons);
	category[6].sprite2.setPosition(sf::Vector2f(20, 400));
}

void menu::draw(sf::RenderWindow & window)
{
	window.draw(backsprite);
	for (int i = 0; i < 8; i++)
	{
		window.draw(category[i].sprite1);
		window.draw(category[i].text);

	}

}/*
bool menu::isSpriteClicked(sf::Sprite &sprite , sf::Vector2i mousepos)
{
	sf::Vector2f ms(mousepos);
	if (sprite.getGlobalBounds().contains(ms))
	{
		return true;
	}
	return false;
}

*/

void menu::updatespr(sf::Sprite & sprite,int n,sf::RenderWindow &window)
{
	category[n].sprite1.setTexture(texture2);
	
}

void menu::reverse(sf::Sprite & sprite, int n, sf::RenderWindow & window)
{
	category[n].sprite1.setTexture(category[n].texture);
}

menu::~menu()
{
}
