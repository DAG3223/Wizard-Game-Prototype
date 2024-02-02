#include <iostream>

#include "raylib.h"
#include "raymath.h"

class Projectile {
public:
	int speed;
	int damage;
	Rectangle hitbox;
};

class Fireball : public Projectile {

};



class Player {
public:
	int hp;
	int mana;
	int level;
	Rectangle hitbox;

	void move(int speed) {
		if (IsKeyDown(KEY_W)) {
			hitbox.y -= speed;
		}
		if (IsKeyDown(KEY_A)) {
			hitbox.x -= speed;
		}
		if (IsKeyDown(KEY_S)) {
			hitbox.y += speed;
		}
		if (IsKeyDown(KEY_D)) {
			hitbox.x += speed;
		}
	}
};

int main() {
	InitWindow(800, 800, "wizard game prototype since i can never finish this stuff");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {



		BeginDrawing();
		ClearBackground(DARKGREEN);

		EndDrawing();
	}


	CloseWindow();
	return 0;
}