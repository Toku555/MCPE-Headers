#pragma once
class RolledSelectionListV{
	public:
		RolledSelectionListV(Minecraft *,int,int,int,int,int,int,int);
		void capYPosition(void);
		void clickedHeader(int,int);
		void convertSelection(int,int,int);
		void evaluate(int,int);
		void getItemAtPosition(int,int);
		void getItemAtYPositionRaw(int);
		void getMaxPosition(void);
		void getPos(float);
		void onPostRender(void);
		void onPreRender(void);
		void render(int,int,float);
		void renderDecorations(int,int);
		void renderDirtBackground(void);
		void renderForeground(void);
		void renderHeader(int,int,Tesselator &);
		void renderHoleBackground(float,float,int,int);
		void selectCancel(void);
		void selectStart(int);
		void setComponentSelected(bool);
		void setRenderHeader(bool,int);
		void setRenderSelection(bool);
		void tick(void);
		void touched(void);
		void ~RolledSelectionListV();
		void ~RolledSelectionListV();
};
