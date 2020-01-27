#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main() {

    RenderWindow window(VideoMode(600, 400), "SFML says hello");

    CircleShape shape(100.f);
    shape.setOrigin(10.0f, 10.0f);
    shape.setPosition(0, 150.0f);
    shape.setFillColor(Color::Red);

    Event event;

    while(window.isOpen()) {
        while(window.pollEvent(event)) {
            if(event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
