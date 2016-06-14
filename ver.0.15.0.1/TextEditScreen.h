#pragma once
class TextEditScreen{
	public:
		TextEditScreen(MinecraftClient &,SignBlockEntity *);
		TextEditScreen(MinecraftClient &,SignBlockEntity *);
		void _buttonClicked(Button &);
		void _buttonClicked(Button &);
		void _setTextboxTextToLine(std::string const&,int);
		void failedToFindSignEntity(void);
		void getScreenName(void);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void handleButtonPress(short);
		void handleCaretLocation(int);
		void handleCaretLocation(int);
		void handleTextChar(std::string const&,bool);
		void handleTextChar(std::string const&,bool);
		void init(void);
		void init(void);
		void onBlockEntityRemoved(BlockSource &,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void onBlockEntityRemoved(BlockSource &,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void onFocusGained(void);
		void onFocusGained(void);
		void onFocusLost(void);
		void onFocusLost(void);
		void render(int,int,float);
		void render(int,int,float);
		void setTextboxText(std::string const&);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void setupPositions(void);
		void tick(void);
		void tick(void);
		void ~TextEditScreen();
		void ~TextEditScreen();
		void ~TextEditScreen();
		void ~TextEditScreen();
};
