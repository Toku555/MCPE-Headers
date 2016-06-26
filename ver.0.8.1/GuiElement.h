#pragma once
class GuiElement{
	public:
		GuiElement(bool,bool,int,int,int,int);
		void backPressed(Minecraft *,bool);
		void clearBackground(void);
		void focusuedMouseClicked(Minecraft *,int,int,int);
		void focusuedMouseReleased(Minecraft *,int,int,int);
		void keyPressed(Minecraft *,int);
		void keyboardNewChar(Minecraft *,std::string,bool);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void pointInside(int,int);
		void render(Minecraft *,int,int);
		void setActiveAndVisibility(bool);
		void setActiveAndVisibility(bool,bool);
		void setBackground(Minecraft *,std::string const&,IntRectangle const&,int,int);
		void setBackground(uint);
		void setTextboxText(std::string const&);
		void setVisible(bool);
		void setupPositions(void);
		void suppressOtherGUI(void);
		void tick(Minecraft *);
		void topRender(Minecraft *,int,int);
		void ~GuiElement();
		void ~GuiElement();
};
