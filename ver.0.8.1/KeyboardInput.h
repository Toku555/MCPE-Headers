#pragma once
class KeyboardInput{
	public:
		KeyboardInput(Options *);
		void releaseAllKeys(void);
		void setKey(int,bool);
		void tick(Player *);
		void ~KeyboardInput();
		void ~KeyboardInput();
};
