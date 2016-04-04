#pragma once
class ChooseLevelScreen{
	public:
		ChooseLevelScreen(MinecraftClient &);
		void _loadLevelSource(void);
		void getUniqueLevelName(std::string const&);
		void init(void);
		void ~ChooseLevelScreen();
		void ~ChooseLevelScreen();
};
