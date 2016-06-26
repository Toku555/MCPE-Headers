#pragma once
class PaneCraftingScreen{
	public:
		PaneCraftingScreen(int);
		void _resortRecipes(void);
		void addItem(Recipe *);
		void buttonClicked(Button *);
		void clearCategoryItems(void);
		void closeOnPlayerHurt(void);
		void closeScreen(void);
		void craftSelectedItem(void);
		void filterRecipes(std::vector<Recipe *,std::allocator<Recipe *>> &);
		void getItems(ItemPane const*);
		void handleBackEvent(bool);
		void init(void);
		void initCategories(void);
		void onItemSelected(ItemPane const*,int);
		void onItemSelected(int,CItem *);
		void recheckRecipes(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setSingleCategoryAndIcon(int,int);
		void setupPositions(void);
		void tick(void);
		void ~PaneCraftingScreen();
		void ~PaneCraftingScreen();
};
