#pragma once
namespace EnchantingScreen{
	class ButtonNode{
		public:
		void ButtonNode(Button &);
		void Traverse(StickDirection);
		void linkHorizontal(EnchantingScreen::ButtonNode&,EnchantingScreen::ButtonNode&);
		void linkVertical(EnchantingScreen::ButtonNode&,EnchantingScreen::ButtonNode&);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _drawBorder(int,int,int,int,int,Color const&);
		void _drawSlotItemAt(Tessellator &,ItemInstance const*,Button const&);
		void _getLapisCount(void);
		void _getTableEntity(void);
		void _handleAddItem(ItemInstance const&,int);
		void _handleBulkItemMovementRequest(Touch::InventoryPane &);
		void _handleRenderPane(Touch::InventoryPane &,Tessellator &,int,int,float);
		void _isLapis(ItemInstance const&);
		void _moveOver(ItemInstance const&,int);
		void _renderBook(Tessellator &,int,int,float,bool);
		void _renderPlayerLevel(int);
		void _renderSelectionBox(Tessellator &);
		void _selectInDirection(StickDirection);
		void _selectingEnchantOption(void);
		void _setupInventoryPane(void);
		void _takeAndClearSlot(int);
		void _updateItems(void);
		void addItem(Touch::InventoryPane &,int);
		void getItems(Touch::InventoryPane const&);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void handleButtonRelease(short);
		void init(void);
		void isAllowed(int);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~EnchantingScreen();
		void ~EnchantingScreen();
	}
};
