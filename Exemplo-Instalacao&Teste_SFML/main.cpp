// include da biblioteca gráfica da SFML
#include <SFML/Graphics.hpp>

int main() {

	// Cria uma janela 800x200 com o título "Hello from SFML"
	sf::RenderWindow window(sf::VideoMode(800, 200), "Hello from SFML");

	// Cria uma objeto de texto <message> que servirá para amostrar textos na janela
	sf::Text message;

	// Escolhemos uma fonte (presente na pasta do GitHub
	sf::Font font;
	font.loadFromFile("28 Days Later.ttf");

	// O objeto <message> passa a utilzar a fonte escolhida no objeto fonte
	message.setFont(font);

	// Coloca uma mensagem no objeto
	message.setString("Hello world");

	// Deixamos ela com o tamanho de 100px
	message.setCharacterSize(100);

	// Escolhemos uma cor
	message.setFillColor(sf::Color::White);

	// Este laço é para deixar a janela aberta enquanto não for fechada, certo?
	while (window.isOpen())
	{
		// Detectamos se a janela foi fechada por um evento de fechar diretamente na janela
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Limpa a tela
		window.clear();

		// Desenha a mensagem e o que for que tiver
		window.draw(message);

		// Apresenta tudo desenhado na tela
		window.display();
	}

	return 0;
}

// EXEMPLO ORIGINAL: http://gamecodeschool.com/sfml/building-your-first-sfml-game-project/