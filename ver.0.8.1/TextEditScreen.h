#pragma once
class TextEditScreen{
	public:
		TextEditScreen(SignTileEntity *);
		void buttonClicked(Button *);
		void failedToFindSignEntity(void);
		void handleBackEvent(bool);
		void init(void);
		void keyPressed(int);
		void keyboardNewChar(std::string const&,bool);
		void lostFocus(void);
		void render(int,int,float);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(void);
		void ~TextEditScreen();
		void ~TextEditScreen();
};
