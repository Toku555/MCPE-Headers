#pragma once
class OptionsScreen{
	public:
		OptionsScreen(bool);
		void buttonClicked(Button *);
		void closeScreen(void);
		void createCategoryButton(int,int,ImageDef &,int,int,int,int);
		void createCategoryButtons(void);
		void generateOptionScreens(void);
		void handleBackEvent(bool);
		void init(void);
		void keyPressed(int);
		void keyboardNewChar(std::string const&,bool);
		void mouseClicked(int,int,int);
		void mouseReleased(int,int,int);
		void removed(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void selectCategory(int);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(void);
		void ~OptionsScreen();
		void ~OptionsScreen();
};
