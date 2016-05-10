#pragma once
class OptionsScreen{
	public:
		OptionsScreen(MinecraftClient &,bool,bool,std::string const&,OptionsScreenSkins,int);
		void _activateButtonById(int);
		void _buttonClicked(Button &);
		void _checkLayoutButtonForSelection(int,int);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _generateOptionScreensDefault(void);
		void _generateOptionScreensSkinsOnly(void);
		void _getPaneItemSize(void);
		void _handleControllerSelection(bool);
		void _handledControllerSelectedButton(void);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void _screenHasFocus(void);
		void _selectCategory(StickDirection);
		void _setupPositionsDefault(void);
		void _setupPositionsSkinsOnly(void);
		void _updateSelected(void);
		void closeScreen(void);
		void createCategoryButton(int,int,int,int,int,int);
		void createCategoryButtons(void);
		void generateOptionScreens(void);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleButtonRelease(short);
		void handleCaretLocation(int);
		void handleScrollWheel(float);
		void handleTextChar(std::string const&,bool);
		void init(void);
		void onFocusGained(void);
		void onFocusLost(void);
		void onSetKeyboardHeight(float);
		void render(int,int,float);
		void renderBgFill(void);
		void renderGameBehind(void);
		void selectCategory(int,bool);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(void);
		void ~OptionsScreen();
		void ~OptionsScreen();
};
