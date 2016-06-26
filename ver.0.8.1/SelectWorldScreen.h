#pragma once
class SelectWorldScreen{
	public:
		SelectWorldScreen(void);
		void buttonClicked(Button *);
		void getUniqueLevelName(std::string const&);
		void handleBackEvent(bool);
		void init(void);
		void isInGameScreen(void);
		void isIndexValid(int);
		void keyPressed(int);
		void loadLevelSource(void);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~SelectWorldScreen();
		void ~SelectWorldScreen();
};
