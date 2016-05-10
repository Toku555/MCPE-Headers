#pragma once
class GuiElementContainer{
	public:
		GuiElementContainer(bool,bool,int,int,int,int);
		void addChild(std::shared_ptr<GuiElement>);
		void backPressed(MinecraftClient *,bool);
		void clearAll(void);
		void focusedMouseClicked(MinecraftClient *,int,int);
		void focusedMouseReleased(MinecraftClient *,int,int);
		void getChildren(void);
		void getChildren(void);
		void handleButtonPress(MinecraftClient *,short);
		void handleButtonRelease(MinecraftClient *,short);
		void handleCaretLocation(int);
		void handleTextChar(MinecraftClient *,std::string const&,bool);
		void hasChildren(void);
		void pointerPressed(MinecraftClient *,int,int);
		void pointerReleased(MinecraftClient *,int,int);
		void removeChild(std::shared_ptr<GuiElement>);
		void render(MinecraftClient *,int,int);
		void setKeyboardHeight(MinecraftClient *,float,Vec2 const&);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void suppressOtherGUI(void);
		void tick(MinecraftClient *);
		void topRender(MinecraftClient *,int,int);
		void ~GuiElementContainer();
		void ~GuiElementContainer();
};
