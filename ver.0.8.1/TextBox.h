#pragma once
class TextBox{
	public:
		TextBox(Minecraft *,Options::Option const*,std::string const&);
		void string const&,int,char const*,int,Screen *,void (Screen::*);
		void backPressed(Minecraft *,bool);
		void focusuedMouseClicked(Minecraft *,int,int,int);
		void focusuedMouseReleased(Minecraft *,int,int,int);
		void getKey(void);
		void getText(void);
		void keyPressed(Minecraft *,int);
		void keyboardNewChar(Minecraft *,std::string,bool);
		void loseFocus(Minecraft *);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void render(Minecraft *,int,int);
		void setFocus(Minecraft *);
		void setText(std::string const&);
		void setTextboxText(std::string const&);
		void setValidChars(char const*,uint);
		void suppressOtherGUI(void);
		void tick(Minecraft *);
		void topRender(Minecraft *,int,int);
		void updateText(Minecraft *);
		void ~TextBox();
		void ~TextBox();
};
