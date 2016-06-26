#pragma once
class ArmorScreen{
	public:
		ArmorScreen(void);
		void addItem(Touch::InventoryPane const*,int);
		void buttonClicked(Button *);
		void canMoveToSlot(int,ItemInstance const*);
		void closeScreen(void);
		void drawSlotItemAt(Tesselator &,int,ItemInstance const*,int,int);
		void getItems(Touch::InventoryPane const*);
		void handleBackEvent(bool);
		void handleRenderPane(Touch::InventoryPane *,Tesselator &,int,int,float);
		void init(void);
		void isAllowed(int);
		void render(int,int,float);
		void renderGameBehind(void);
		void renderPlayer(float,float);
		void setupInventoryPane(void);
		void setupPositions(void);
		void takeAndClearSlot(int);
		void tick(void);
		void updateItems(void);
		void ~ArmorScreen();
		void ~ArmorScreen();
};
