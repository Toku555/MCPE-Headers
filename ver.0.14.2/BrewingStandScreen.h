#pragma once
class BrewingStandScreen{
	public:
		void _buttonClicked(Button &);
		void _canMoveToBrewingStand(int,ItemInstance const*);
		void _clearItems(void);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _drawSlotItemAt(Tessellator &,ItemInstance const*,int,int,bool,bool);
		void _getBrewingStandEntity(void);
		void _handleBulkItemMovementRequest(Touch::InventoryPane &);
		void _handleRenderPane(Touch::InventoryPane &,Tessellator &,int,int,float);
		void _moveOver(ItemInstance const*,int);
		void _recheckRecipes(void);
		void _setSelectedBlock(StickDirection);
		void _setupInventoryPane(void);
		void _updateItems(void);
		void _updateSelectedItemDesc(void);
		void addItem(Touch::InventoryPane &,int);
		void getItems(Touch::InventoryPane const&);
		void getScreenName(void);
		void handleButtonPress(short);
		void handleButtonRelease(short);
		void handleScrollWheel(float);
		void init(void);
		void isAllowed(int);
		void onInternetUpdate(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setIfNotSet(bool &,bool);
		void setupPositions(void);
		void tick(void);
		void ~BrewingStandScreen();
		void ~BrewingStandScreen();
};
