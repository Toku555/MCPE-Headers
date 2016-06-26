#pragma once
class XperiaPlayInput{
	public:
		XperiaPlayInput(Minecraft *,Options *);
		void onConfigChanged(Config const&);
		void render(float);
		void tick(Player *);
		void ~XperiaPlayInput();
		void ~XperiaPlayInput();
};
