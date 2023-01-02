#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
	sf::Window window(sf::VideoMode(1280, 720), "Title", sf::Style::Titlebar | sf::Style::Close);
	while (window.isOpen()){
		sf::Event event;
		std::cout << "Hello World\n";
	}
	return 0;
}