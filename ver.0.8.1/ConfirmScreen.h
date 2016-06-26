#pragma once
class ConfirmScreen{
	public:
		ConfirmScreen(Screen *,std::string const&,std::string const&,int);
		ConfirmScreen(Screen *,std::string const&,std::string const&,std::string const&,std::string const&,int);
		void buttonClicked(Button *);
		void handleBackEvent(bool);
		void init(void);
		void postResult(bool);
		void render(int,int,float);
		void setupPositions(void);
		void ~ConfirmScreen();
		void ~ConfirmScreen();
};
