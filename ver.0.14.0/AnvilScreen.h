#pragma once
class AnvilScreen{
	public:
		void _buttonClicked(Button &);
		void _canMoveToAnvil(int,ItemInstance const&);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _drawSlotItemAt(Tessellator &,ItemInstance const&,int,int,bool);
		void _entityCheck(void);
		void _handleAddItem(int,ItemInstance const&);
		void _handleBulkItemMovementRequest(Touch::InventoryPane &);
		void _handleRenderPane(Touch::InventoryPane &,Tessellator &,int,int,float);
		void _moveOver(ItemInstance const&,int);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void _renderLabels(void);
		void _selectInDirection(StickDirection);
		void _setIfNotSet(bool &,bool);
		void _setupInventoryPane(void);
		void _updateInventoryItems(void);
		void addItem(Touch::InventoryPane &,int);
		void getItems(Touch::InventoryPane const&);
		void handleButtonPress(short);
		void handleTextChar(std::string const&,bool);
		void init(void);
		void isAllowed(int);
		void onSetKeyboardHeight(float);
		void render(int,int,float);
		void setTextboxText(std::string const&);
		void setupPositions(void);
		void tick(void);
		void ~AnvilScreen();
		void ~AnvilScreen();
};
