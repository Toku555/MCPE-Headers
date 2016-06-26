#pragma once
class CreativeInventoryScreen{
	public:
		CreativeInventoryScreen(void);
		void TabButtonWithMeta(CreativeInventoryScreen::TabButtonWithMeta const&);
		void TabButtonWithMeta(CreativeInventoryScreen::TabButtonWithMeta&&);
		void ~TabButtonWithMeta();
		void _putItemInToolbar(ItemInstance const*);
		void addItem(Touch::InventoryPane const*,int);
		void buttonClicked(Button *);
		void closeWindow(void);
		void createInventoryTabButton(int,int);
		void drawIcon(int,std::shared_ptr<ImageButton>,bool,bool);
		void getCategoryFromPanel(Touch::InventoryPane const*);
		void getItemFromType(int);
		void getItems(Touch::InventoryPane const*);
		void handleBackEvent(bool);
		void init(void);
		void isAllowed(int);
		void mouseClicked(int,int,int);
		void mouseReleased(int,int,int);
		void populateFilteredItems(void);
		void populateItem(Item *,int,int);
		void populateItem(Tile *,int,int);
		void populateItems(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~CreativeInventoryScreen();
		void ~CreativeInventoryScreen();
};
