#pragma once
class Recipes{
	public:
		Recipes(void);
		void Shape(std::string const&);
		void Shape(std::string const&,std::string const&);
		void Shape(std::string const&,std::string const&,std::string const&);
		void _addFenceAndGateRecipes(void);
		void _addFenceRecipes(void);
		void _addGateRecipes(void);
		void _addMapRecipes(void);
		void _addStairRecipies(void);
		void _addStoneStairsRecipes(void);
		void _addWoodDoorRecipes(void);
		void _addWoodStairsRecipes(void);
		void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe,std::default_delete<ShapedRecipe>>);
		void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe,std::default_delete<ShapelessRecipe>>);
		void addMultiRecipe(std::unique_ptr<MultiRecipe,std::default_delete<MultiRecipe>>);
		void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe,std::default_delete<RepairItemRecipe>>);
		void addShapedRecipe(ItemInstance const&,std::string const&,std::string const&,std::string const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addShapedRecipe(ItemInstance const&,std::string const&,std::string const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addShapedRecipe(ItemInstance const&,std::string const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addShapedRecipe(ItemInstance const&,std::vector<std::string,std::allocator<std::string>> const&,std::vector const&<Recipes::Type,std::allocator<std::vector const>>);
		void addShapedRecipe(std::vector<ItemInstance,std::allocator<ItemInstance>> const&,std::vector const&<std::string,std::allocator<std::string>>,std::vector const&<Recipes::Type,std::allocator<std::vector const>>);
		void addShapelessRecipe(ItemInstance const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addSingleIngredientRecipeItem(ItemInstance const&,ItemInstance const&);
		void clearRecipes(void);
		void getInstance(void);
		void getRecipeFor(ItemInstance const&);
		void getRecipes(void);
		void init(void);
		void teardownRecipes(void);
};
