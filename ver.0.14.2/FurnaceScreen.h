#pragma once
class FurnaceScreen{
	public:
		void _buttonClicked(Button &);
		void _canMoveToFurnace(int,ItemInstance const*);
		void _clearItems(void);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _drawSlotItemAt(Tessellator &,ItemInstance const*,int,int,bool);
		void _getFurnaceEntity(void);
		void _handleBulkItemMovementRequest(Touch::InventoryPane &);
		void _handleRenderPane(Touch::InventoryPane &,Tessellator &,int,int,float);
		void _moveOver(ItemInstance const&,int);
		void _recheckRecipes(void);
		void _selectInDirection(StickDirection);
		void _setIfNotSet(bool &,bool);
		void _setupInventoryPane(void);
		void _updateItems(void);
		void _updateResult(ItemInstance const*);
		void addItem(Touch::InventoryPane &,int);
		void getItems(Touch::InventoryPane const&);
		void getScreenName(void);
		void grantCraftedXp(Player &,ItemInstance const*,int);
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
		void ~FurnaceScreen();
		void ~FurnaceScreen();
};
