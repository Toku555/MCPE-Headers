#pragma once
class RenameMPLevelScreen{
	public:
		RenameMPLevelScreen(MinecraftClient &,std::string const&);
		void getScreenName(void);
		void init(void);
		void render(int,int,float);
		void ~RenameMPLevelScreen();
		void ~RenameMPLevelScreen();
};
