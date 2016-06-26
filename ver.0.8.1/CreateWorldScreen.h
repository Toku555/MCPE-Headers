#pragma once
class CreateWorldScreen{
	public:
		CreateWorldScreen(CreateWorldScreenType,MCOServerListItem const&);
		void buttonClicked(Button *);
		void closeScreen(void);
		void feedMCOEvent(MCOEvent);
		void generateLocalGame(void);
		void generateMCOGame(bool);
		void getLevelName(void);
		void getSeed(void);
		void handleBackEvent(bool);
		void init(void);
		void isCreative(void);
		void keyPressed(int);
		void keyboardNewChar(std::string const&,bool);
		void mouseClicked(int,int,int);
		void mouseReleased(int,int,int);
		void render(int,int,float);
		void setGameType(bool);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(void);
		void waitForMCO(void);
		void ~CreateWorldScreen();
		void ~CreateWorldScreen();
};
