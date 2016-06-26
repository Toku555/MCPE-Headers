#pragma once
class ScrolledSelectionList{
	public:
		ScrolledSelectionList(Minecraft *,int,int,int,int,int);
		void capYPosition(void);
		void clickedHeader(int,int);
		void getItemAtPosition(int,int);
		void getMaxPosition(void);
		void render(int,int,float);
		void renderDecorations(int,int);
		void renderDirtBackground(void);
		void renderHeader(int,int,Tesselator &);
		void renderHoleBackground(float,float,int,int);
		void setRenderHeader(bool,int);
		void setRenderSelection(bool);
		void ~ScrolledSelectionList();
		void ~ScrolledSelectionList();
};
