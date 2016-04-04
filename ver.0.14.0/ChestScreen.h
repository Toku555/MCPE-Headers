#pragma once
class ChestScreen{
	public:
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _drawSlotItemAt(Tessellator &,ItemInstance const*,int,int,bool);
		void _entityCheck(void);
		void _getChestEntity(void);
		void _getContainer(void);
		void _getInventory(void);
		void _handleAddItem(FillingContainer *,FillingContainer *,int);
		void _handleBulkItemMovementRequest(Touch::InventoryPane &);
		void _handleRenderPane(Touch::InventoryPane &,Tessellator &,int,int,float);
		void _init(void);
		void _setupPane(void);
		void _updateSelectedIndexes(StickDirection);
		void addItem(Touch::InventoryPane &,int);
		void containerChanged(int);
		void getItems(Touch::InventoryPane const&);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void handleButtonRelease(short);
		void handleScrollWheel(float);
		void init(void);
		void isAllowed(int);
		void onInternetUpdate(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~ChestScreen();
		void ~ChestScreen();
};
