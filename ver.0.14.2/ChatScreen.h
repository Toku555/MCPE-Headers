#pragma once
class ChatScreen{
	public:
		ChatScreen(MinecraftClient &,bool);
		void _buttonClicked(Button &);
		void closeOnPlayerHurt(void);
		void closeWindow(void);
		void drawChatMessages(int);
		void forceActivateKeyboard(void);
		void getKeyboardHeight(void);
		void getScreenName(void);
		void guiMessagesUpdated(void);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void handleCaretLocation(int);
		void handleTextChar(std::string const&,bool);
		void hideKeyboard(void);
		void init(void);
		void onFocusLost(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void sendChatMessage(void);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void showKeyboard(void);
		void tick(void);
		void updateGuiMessages(void);
		void updateToggleKeyboardButton(void);
		void ~ChatScreen();
		void ~ChatScreen();
};
