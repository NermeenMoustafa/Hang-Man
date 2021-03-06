#include<SFML/Graphics.hpp>
#include"Menu.h"
#include"Player.h"
#include<iostream>

int main()
{
	bool start = false, choosen = false, play=false ; int choosn, no = 0;

	sf::RenderWindow Main_window(sf::VideoMode(585,920), "Main Menu");
	Player player(Main_window.getSize().x, Main_window.getSize().y);

	menu menu1(Main_window.getSize().x, Main_window.getSize().y);
	
	//************************************************************************************************************
	sf::Texture Main_texture;
	sf::Sprite Main_sprite;
	if (!Main_texture.loadFromFile("images/main.png"))
	{
		std::cout << "ERROR Main texture" << std::endl;
	}
	Main_sprite.setTexture(Main_texture);
	//*************************************************************************************************************
	while (Main_window.isOpen())
	{
		sf::Event event;
		while (Main_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				Main_window.close();
			sf::Vector2i mousepos = sf::Mouse::getPosition(Main_window);
			if (event.type == event.MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left&&event.mouseButton.x > 229 && event.mouseButton.x < 372 && event.mouseButton.y>575 && event.mouseButton.y < 733)
				{
					start = true;
					std::cout << mousepos.x << ' ' << mousepos.y << std::endl;
					Main_window.close();
				}

			}
			Main_window.display();
			Main_window.draw(Main_sprite);
		}
	}
	//Start Window code*****************************************************************************************************
		if (start)
		{
			sf::RenderWindow Start_game(sf::VideoMode(585, 920), "STart Game");
			while (Start_game.isOpen())
			{
				Main_window.close();
				sf::Event event2;
				while (Start_game.pollEvent(event2))
				{
					if (event2.type == sf::Event::Closed)
					Start_game.close();
					sf::Vector2i mousepos = sf::Mouse::getPosition(Start_game);
					if (event2.type == event2.MouseButtonPressed)
					{
					
						
						for (int i = 1; i <= 6; i++)
						{
							
							if (menu1.category[i].isSpriteClicked(menu1.category[i].sprite1, mousepos)&&no==0)
							{
								
								choosn = i;
								choosen = true;
								no++;
							}
						}
						if (choosen&&no==1)
						{
							menu1.updatespr(menu1.category[choosn].sprite1, choosn, Start_game);
						}
						if (choosen && menu1.category[7].isSpriteClicked(menu1.category[7].sprite1, mousepos))
						{
							std::cout << "clicked" << std::endl;
							play = true;
							Start_game.close();
						}
					}
					Start_game.display();
					menu1.draw(Start_game);
				}
				
			}
		}
	//******************************************************************************************************************
		if (play)
		{
			sf::RenderWindow Play(sf::VideoMode(585, 920), "Hangman");
				while (Play.isOpen())
				{
				
					sf::Event event3;
					while (Play.pollEvent(event3))
					{
						if (event3.type == sf::Event::Closed)
							Play.close();
						sf::Vector2i mouseposs = sf::Mouse::getPosition(Play);
						if (event3.type == event3.MouseButtonPressed) {
							
								for (int i = 0; i < 26; i++) {
						if (player.letters[0].isRectClicked(player.letters[i].rect1, mouseposs))
								{
									player.letters[i].rect1.setFillColor(sf::Color::Green);
									std::cout << "clicked" << std::endl;
								}
							}
						}
					}
					Play.display();
					player.draw(Play);
					//Play.clear();
				
			    }
		}

	return 0;
}