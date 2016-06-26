#pragma once
class IngameBlockSelectionScreen{
	public:
		IngameBlockSelectionScreen(void);
		void buttonClicked(Button *);
		void getSelectedSlot(int,int);
		void getSlotHeight(void);
		void getSlotPosX(int);
		void getSlotPosY(int);
		void init(void);
		void isAllowed(int);
		void keyPressed(int);
		void mouseClicked(int,int,int);
		void mouseReleased(int,int,int);
		void removed(void);
		void render(int,int,float);
		void renderDemoOverlay(void);
		void renderGameBehind(void);
		void renderSlot(int,int,int,float);
		void renderSlots(void);
		void selectSlotAndClose(void);
		void ~IngameBlockSelectionScreen();
		void ~IngameBlockSelectionScreen();
};
