#pragma once
class LoginOption{
	public:
		LoginOption(Minecraft *);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void setupPositions(void);
		void tick(Minecraft *);
		void ~LoginOption();
		void ~LoginOption();
};
