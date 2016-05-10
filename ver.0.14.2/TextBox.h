#pragma once
class TextBox{
	public:
		TextBox(MinecraftClient &,Options::Option const*,std::string const&,std::string const&);
		void string const&,Screen *,void (Screen::*);
		void _getClippedString(MinecraftClient *);
		void backPressed(MinecraftClient *,bool);
		void focusedMouseClicked(MinecraftClient *,int,int);
		void focusedMouseReleased(MinecraftClient *,int,int);
		void getKey(void);
		void getText(void);
		void handleButtonRelease(MinecraftClient *,short);
		void handleCaretLocation(int);
		void handleTextChar(MinecraftClient *,std::string const&,bool);
		void hasFocus(void);
		void isValidCharacter(std::string const&);
		void loseFocus(MinecraftClient *);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void render(MinecraftClient *,int,int);
		void setCaretPosition(int);
		void setFocus(MinecraftClient *);
		void setName(std::string const&);
		void setText(std::string const&);
		void setTextboxText(std::string const&);
		void setValidChars(std::string const&);
		void suppressOtherGUI(void);
		void tick(MinecraftClient *);
		void topRender(MinecraftClient *,int,int);
		void updateText(MinecraftClient *);
		void ~TextBox();
		void ~TextBox();
};
