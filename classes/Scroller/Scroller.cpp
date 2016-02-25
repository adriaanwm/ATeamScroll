#include "Scroller.h"

void Scroller::update() {
	int character_pos_minus_center;
	int window_center = m_window_width / 2;

	// make sure character doesn't move past left border
	m_left_border->collide(m_character);

	/**
	 * TODO PART 1:
	 *	in mario, when you move in the left half of the screen
	 *	the camera doesn't move, and you can't move left past the current view
	 *	
	 *	your job is to calculate m_x_distance so that it only increases
	 *	when the character tries to move into the right half of the screen
	 *
	 *	see Scroller.h for a description of what m_x_distance is
	 *
	 *	hint(s):
	 *		use the variables declared at the top of this method.
	 *		max 4 lines of code.	
	 *		m_character->get_right() returns the rightmost edge of m_character
	 */

	/**
	 * TODO PART 2: keep the left border updated as the camera moves right
	 *	hint: m_left_border->update(int) updates the x location
	 */

	/**
	 * TODO PART 3: set the camera to be centered at m_x_distance
	 *	call glTranslatef(float1, float2, float3);
	 *	docs : https://www.opengl.org/sdk/docs/man2/xhtml/glTranslate.xml
	 *
	 *	hint: one parameter might need a negative sign, the other two might
	 *				be 0
	 */

	/**
	 * TODO BONUS: finish the game...
	 * add sound effects, animations, textures, bad guys, unicorns
	 * hand your code in to Adriaan. Get a prize.
	 */

}

Scroller::Scroller(Character *c, int window_width) {
	m_character = c;
	m_left_border = new Border(0,0,0,0); 
	m_x_distance = 0;	
	m_window_width = window_width;
}
