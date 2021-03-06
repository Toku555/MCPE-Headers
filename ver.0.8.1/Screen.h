#pragma once
class Screen{
	public:
		Screen(void);
		void buttonClicked(Button *);
		void closeOnPlayerHurt(void);
		void confirmResult(bool,int);
		void feedMCOEvent(MCOEvent);
		void handleBackEvent(bool);
		void hasClippingArea(IntRectangle &);
		void init(Minecraft *,int,int);
		void init(void);
		void isErrorScreen(void);
		void isInGameScreen(void);
		void isPauseScreen(void);
		void keyPressed(int);
		void keyboardEvent(void);
		void keyboardNewChar(std::string const&,bool);
		void keyboardTextEvent(void);
		void lostFocus(void);
		void mouseClicked(int,int,int);
		void mouseEvent(void);
		void mouseReleased(int,int,int);
		void onInternetUpdate(void);
		void onMojangConnectorStatus(MojangConnectionStatus);
		void onTextBoxUpdated(int);
		void removed(void);
		void render(int,int,float);
		void renderBackground(int);
		void renderDirtBackground(int);
		void renderGameBehind(void);
		void renderMenuBackground(float);
		void setSize(int,int);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void supppressedBySubWindow(void);
		void tick(void);
		void toGUICoordinate(int &,int &);
		void updateEvents(void);
		void updateTabButtonSelection(void);
		void ~Screen();
		void ~Screen();
};
