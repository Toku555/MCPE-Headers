#pragma once
class CraftingDataEntry{
	public:
		void addEnchantList(std::weak_ptr<EnchantingMenu>);
		void addEnchantList(std::weak_ptr<EnchantingMenu>);
		void addFurnaceAuxRecipe(FurnaceRecipes &);
		void addFurnaceRecipe(FurnaceRecipes &);
		void addMultiRecipe(Recipes &);
		void addMultiRecipe(Recipes &);
		void addShapedRecipe(Recipes &);
		void addShapedRecipe(Recipes &);
		void addShapelessRecipe(Recipes &);
		void addShapelessRecipe(Recipes &);
		void fillFromEnchantList(std::vector<std::pair<int,ItemEnchants>,std::allocator<std::pair<int,ItemEnchants>>> const&,std::vector const&<std::string,std::allocator<std::string>>);
		void fillFromEnchantList(std::vector<std::pair<int,ItemEnchants>,std::allocator<std::pair<int,ItemEnchants>>> const&,std::vector const&<std::string,std::allocator<std::string>>);
		void fillFromFurnaceAuxRecipe(int,ItemInstance const&);
		void fillFromFurnaceRecipe(int,ItemInstance const&);
		void fillFromRecipe(Recipe const&);
		void fillFromShapedRecipe(ShapedRecipe const&);
		void fillFromShapedRecipe(ShapedRecipe const&);
		void fillFromShapelessRecipe(ShapelessRecipe const&);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
};
