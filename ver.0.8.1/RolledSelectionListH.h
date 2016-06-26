#pragma once
class RolledSelectionListH{
	public:
		RolledSelectionListH(Minecraft *,int,int,int,int,int,int,int);
		void capXPosition(void);
		void clickedHeader(int,int);
		void getItemAtPosition(int,int);
		void getItemAtXPositionRaw(int);
		void getMaxPosition(void);
		void getPos(float);
		void render(int,int,float);
		void renderDecorations(int,int);
		void renderHeader(int,int,Tesselator &);
		void renderHoleBackground(float,float,int,int);
		void selectCancel(void);
		void selectStart(int,int,int);
		void setComponentSelected(bool);
		void setRenderHeader(bool,int);
		void setRenderSelection(bool);
		void tick(void);
		void touched(void);
		void ~RolledSelectionListH();
		void ~RolledSelectionListH();
};
