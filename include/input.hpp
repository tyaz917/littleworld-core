#ifndef INPUT_H
#define INPUT_H

#include <SMFL/Graphics.hpp>
#include "observer.hpp"
#include "view.hpp"

struct Button 
{
	bool left;
	bool right;
	bool up;
	bool down;
	bool attack;
	bool spell;
	bool run;
	bool enter;
};

typedef enum buttonType {
	up, down, right, left, attack, spell, run, enter;
} buttonType;

class Input 
{
private:
	sf::Event event_;
	Button button;

public:
	Input();

	Button getButton(void) const;

	void setButton(buttonType button, bool state);

	void handleInputs(View &window);
};

#endif