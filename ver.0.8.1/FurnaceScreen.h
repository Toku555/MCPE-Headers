#pragma once
class FurnaceScreen{
	public:
		FurnaceScreen(Player *,FurnaceTileEntity *);
		void addItem(Touch::InventoryPane const*,int);
		void buttonClicked(Button *);
		void canMoveToFurnace(int,ItemInstance const*);
		void clearItems(void);
		void drawSlotItemAt(Tesselator &,ItemInstance const*,int,int,bool);
		void getItems(Touch::InventoryPane const*);
		void handleAddItem(int,ItemInstance const*);
		void handleRenderPane(Touch::InventoryPane *,Tesselator &,int,int,float);
		void init(void);
		void isAllowed(int);
		void moveOver(ItemInstance const*,int);
		void recheckRecipes(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupInventoryPane(void);
		void setupPositions(void);
		void takeAndClearSlot(int);
		void tick(void);
		void updateItems(void);
		void updateResult(ItemInstance const*);
		void ~FurnaceScreen();
		void ~FurnaceScreen();
};
