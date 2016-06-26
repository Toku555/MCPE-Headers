#pragma once
class GuiElementContainer{
	public:
		GuiElementContainer(bool,bool,int,int,int,int);
		void addChild(std::shared_ptr<GuiElement>);
		void backPressed(Minecraft *,bool);
		void clearAll(void);
		void focusuedMouseClicked(Minecraft *,int,int,int);
		void focusuedMouseReleased(Minecraft *,int,int,int);
		void keyPressed(Minecraft *,int);
		void keyboardNewChar(Minecraft *,std::string,bool);
		void mouseClicked(Minecraft *,int,int,int);
		void mouseReleased(Minecraft *,int,int,int);
		void removeChild(std::shared_ptr<GuiElement>);
		void render(Minecraft *,int,int);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void suppressOtherGUI(void);
		void tick(Minecraft *);
		void topRender(Minecraft *,int,int);
		void ~GuiElementContainer();
		void ~GuiElementContainer();
};
