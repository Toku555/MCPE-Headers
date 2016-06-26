#pragma once
class ChestScreen{
	public:
		ChestScreen(Player *,ChestTileEntity *);
		void addItem(Touch::InventoryPane const*,int);
		void buttonClicked(Button *);
		void drawSlotItemAt(Tesselator &,ItemInstance const*,int,int,bool);
		void getItems(Touch::InventoryPane const*);
		void handleAddItem(FillingContainer *,FillingContainer *,int);
		void handleRenderPane(Touch::InventoryPane *,Tesselator &,int,int,float);
		void init(void);
		void isAllowed(int);
		void onInternetUpdate(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPane(void);
		void setupPositions(void);
		void tick(void);
		void ~ChestScreen();
		void ~ChestScreen();
};
