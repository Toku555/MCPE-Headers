#pragma once
class IMoveInput{
	public:
		void onConfigChanged(Config const&);
		void releaseAllKeys(void);
		void render(float);
		void setKey(int,bool);
		void tick(Player *);
		void ~IMoveInput();
		void ~IMoveInput();
};
