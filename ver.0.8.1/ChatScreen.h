#pragma once
class ChatScreen{
	public:
		ChatScreen(void);
		void buttonClicked(Button *);
		void closeOnPlayerHurt(void);
		void closeWindow(void);
		void drawChatMessages(int);
		void guiMessagesUpdated(void);
		void handleBackEvent(bool);
		void init(void);
		void isErrorScreen(void);
		void isInGameScreen(void);
		void isPauseScreen(void);
		void keyPressed(int);
		void keyboardNewChar(std::string const&,bool);
		void removed(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void sendChatMessage(void);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(void);
		void updateGuiMessages(void);
		void updateKeyboardVisibility(void);
		void updateToggleKeyboardButton(void);
		void ~ChatScreen();
		void ~ChatScreen();
};
