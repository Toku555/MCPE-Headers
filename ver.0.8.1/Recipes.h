#pragma once
class Recipes{
	public:
		Recipes(void);
		void Shape(std::string const&);
		void Shape(std::string const&,std::string const&);
		void Shape(std::string const&,std::string const&,std::string const&);
		void Type(Recipes::Type const&);
		void Type(char,Item *);
		void Type(char,ItemInstance const&);
		void Type(char,Tile *);
		void addShapedRecipe(ItemInstance const&,std::string const&,std::string const&,std::string const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addShapedRecipe(ItemInstance const&,std::string const&,std::string const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addShapedRecipe(ItemInstance const&,std::string const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void addShapedRecipe(ItemInstance const&,std::vector<std::string,std::allocator<std::string>> const&,std::vector const&<Recipes::Type,std::allocator<std::vector const>>);
		void addShapedRecipe(std::vector<ItemInstance,std::allocator<ItemInstance>> const&,std::vector const&<std::string,std::allocator<std::string>>,std::vector const&<Recipes::Type,std::allocator<std::vector const>>);
		void addShapelessRecipe(ItemInstance const&,std::vector<Recipes::Type,std::allocator<Recipes::Type>> const&);
		void getInstance(void);
		void getRecipeFor(ItemInstance const&);
		void getRecipes(void);
		void teardownRecipes(void);
		void ~Recipes();
};
