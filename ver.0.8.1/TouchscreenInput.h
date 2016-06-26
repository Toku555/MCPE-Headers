#pragma once
class TouchscreenInput{
	public:
		TouchscreenInput(Minecraft *,Options *);
		void clear(void);
		void getPauseRectangleArea(void);
		void getRectangleArea(void);
		void isButtonDown(int);
		void onConfigChanged(Config const&);
		void rebuild(void);
		void releaseAllKeys(void);
		void render(float);
		void setKey(int,bool);
		void tick(Player *);
		void ~TouchscreenInput();
		void ~TouchscreenInput();
};
