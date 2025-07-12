#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
void w3(Font& font, int& score) {
	RenderWindow window(VideoMode(300, 320), "Bubble Shooter Game");
	// Score display
	Text scoreText;
	scoreText.setFont(font);
	scoreText.setCharacterSize(24);
	scoreText.setFillColor(Color::White);
	scoreText.setPosition(90, 90);
	Text m("Keep It Up!", font, 25);
	m.setFillColor(Color::Red);
	m.setPosition(Vector2f(80.f, 150.f));
	m.setOutlineThickness(5.f);
	m.setOutlineColor(Color::Black);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
				window.close();
			}
		}
		window.clear(Color::Blue);
		// Display score
		scoreText.setString("Score: " + to_string(score));
		window.draw(scoreText);
		window.draw(m);
		window.display();
	}
}
void w2(Font& font) {
	int keyTime = 8, score=0;
	RenderWindow window(VideoMode(450, 500), "Bubble Shooter Game");
	window.setFramerateLimit(60);
	CircleShape c1(20.f);
	c1.setFillColor(Color::Blue);
	c1.setPosition(100, 0);
	CircleShape c2(20.f);
	c2.setFillColor(Color::Cyan);
	c2.setPosition(140, 0);
	CircleShape c3(20.f);
	c3.setFillColor(Color::Green);
	c3.setPosition(180, 0);
	CircleShape c4(20.f);
	c4.setFillColor(Color::Magenta);
	c4.setPosition(220, 0);
	CircleShape c5(20.f);
	c5.setFillColor(Color::Red);
	c5.setPosition(260, 0);
	CircleShape c6(20.f);
	c6.setFillColor(Color::Yellow);
	c6.setPosition(300, 0);
	CircleShape r1(20.f);
	r1.setFillColor(Color::Red);
	r1.setPosition(100, 40);
	CircleShape r2(20.f);
	r2.setFillColor(Color::Magenta);
	r2.setPosition(140, 40);
	CircleShape r3(20.f);
	r3.setFillColor(Color::Green);
	r3.setPosition(180, 40);
	CircleShape r4(20.f);
	r4.setFillColor(Color::Cyan);
	r4.setPosition(220, 40);
	CircleShape r5(20.f);
	r5.setFillColor(Color::Blue);
	r5.setPosition(260, 40);
	CircleShape r6(20.f);
	r6.setFillColor(Color::Black);
	r6.setPosition(300, 40);
	CircleShape cir(20.f);
	cir.setFillColor(Color::Blue);
	cir.setPosition(Vector2f(200.f, 400.f));
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
				window.close();
			}
		}
		if (keyTime < 8)
			keyTime++;
		if (event.key.code == Keyboard::W && cir.getPosition().y > 0) cir.move(0.f, -5.f);
		if (event.key.code == Keyboard::S && cir.getPosition().y <= 500) cir.move(0.f, 1.f);
		if (event.key.code == Keyboard::A && cir.getPosition().x > 0) cir.move(-1.f, 0.f);
		if (event.key.code == Keyboard::D && cir.getPosition().y <= 450) cir.move(1.f, 0.f);
		if (cir.getGlobalBounds().intersects(r1.getGlobalBounds()) && cir.getFillColor()==r1.getFillColor()){
			cir.setFillColor(Color::Black);
			cir.setPosition(Vector2f(200.f, 400.f));
			r1.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(r2.getGlobalBounds())&& cir.getFillColor() == r2.getFillColor()){
			cir.setFillColor(Color::Blue);
			cir.setPosition(Vector2f(200.f, 400.f));
			r2.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(r3.getGlobalBounds()) && cir.getFillColor() == r3.getFillColor()){
			cir.setFillColor(Color::Cyan);
			cir.setPosition(Vector2f(200.f, 400.f));
			r3.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(r4.getGlobalBounds()) && cir.getFillColor() == r4.getFillColor()){
			cir.setFillColor(Color::Green);
			cir.setPosition(Vector2f(200.f, 400.f));
			r4.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(r5.getGlobalBounds()) && cir.getFillColor() == r5.getFillColor()) {
			cir.setFillColor(Color::Magenta);
			cir.setPosition(Vector2f(200.f, 400.f));
			r5.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(r6.getGlobalBounds()) && cir.getFillColor() == r6.getFillColor()) {
			cir.setFillColor(Color::Red);
			cir.setPosition(Vector2f(200.f, 400.f));
			r6.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(c1.getGlobalBounds()) && cir.getFillColor() == c1.getFillColor()) {
			cir.setFillColor(Color::Yellow);
			cir.setPosition(Vector2f(200.f, 400.f));
			c1.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(c2.getGlobalBounds()) && cir.getFillColor() == c2.getFillColor()) {
			cir.setFillColor(Color::Black);
			cir.setPosition(Vector2f(200.f, 400.f));
			c2.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(c3.getGlobalBounds()) && cir.getFillColor() == c3.getFillColor()) {
			cir.setFillColor(Color::Red);
			cir.setPosition(Vector2f(200.f, 400.f));
			c3.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(c4.getGlobalBounds()) && cir.getFillColor() == c4.getFillColor()) {
			cir.setFillColor(Color::Yellow);
			cir.setPosition(Vector2f(200.f, 400.f));
			c4.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(c5.getGlobalBounds()) && cir.getFillColor() == c5.getFillColor()) {
			cir.setFillColor(Color::Green);
			cir.setPosition(Vector2f(200.f, 400.f));
			c5.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if (cir.getGlobalBounds().intersects(c6.getGlobalBounds()) && cir.getFillColor() == c6.getFillColor()) {
			cir.setFillColor(Color::Magenta);
			cir.setPosition(Vector2f(200.f, 400.f));
			c6.setPosition(Vector2f(1000, 0));
			score = score + 10;
		}
		if(cir.getPosition().y == 0) {
			cir.setPosition(Vector2f(200.f, 400.f));
			cir.setFillColor(Color::Cyan);
		}
		if (c1.getPosition().x == 1000 && c2.getPosition().x == 1000 && c3.getPosition().x == 1000 &&
			c4.getPosition().x == 1000 && c5.getPosition().x == 1000 && c6.getPosition().x == 1000 &&
			r1.getPosition().x == 1000 && r2.getPosition().x == 1000 && r3.getPosition().x == 1000 &&
			r4.getPosition().x == 1000 && r5.getPosition().x == 1000 && r6.getPosition().x == 1000){
			window.close();
			w3(font, score);
		}
		window.clear(Color::White);
		window.draw(cir);
		window.draw(c1);
		window.draw(c2);
		window.draw(c3);
		window.draw(c4);
		window.draw(c5);
		window.draw(c6);
		window.draw(r1);
		window.draw(r2);
		window.draw(r3);
		window.draw(r4);
		window.draw(r5);
		window.draw(r6);
		window.display();
	}
}
int main() {
	RenderWindow w1(VideoMode(600.f, 600.f), "Bubble Shooter Game");
	Font font;
	if (!font.loadFromFile("arial.ttf"))
		cout << "Can't load font";
	Text t("Welcome To", font, 45);
	t.setFillColor(Color::White);
	t.setPosition(Vector2f(160.f, 150.f));
	t.setOutlineThickness(5.f);
	t.setOutlineColor(Color::Black);
	Text t1("Bubble Shooter Game", font, 45);
	t1.setFillColor(Color::White);
	t1.setPosition(Vector2f(120.f, 250.f));
	t1.setOutlineThickness(5.f);
	t1.setOutlineColor(Color::Black);
	RectangleShape box(Vector2f(105.f, 50.f));
	box.setFillColor(Color::Yellow);
	box.setPosition(Vector2f(250.f, 350.f));
	box.setOutlineThickness(5.f);
	box.setOutlineColor(Color::Black);
	Text r("Start", font, 45);
	r.setFillColor(Color::Red);
	r.setPosition(Vector2f(255.f, 348.f));
	r.setOutlineThickness(5.f);
	r.setOutlineColor(Color::Black);
	while (w1.isOpen()) {
		Event event;
		while (w1.pollEvent(event)) {
			if (event.type == Event::Closed)
				w1.close();
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
				w1.close();
			if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) {
				Vector2f mousePosition = w1.mapPixelToCoords(Mouse::getPosition(w1));
				if (box.getGlobalBounds().contains(mousePosition)) {
					w2(font);
				}
			}
		}
		w1.clear(Color::Magenta);
		w1.draw(t);
		w1.draw(t1);
		w1.draw(box);
		w1.draw(r);
		w1.display();
	}
	return 0;
}
