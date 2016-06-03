#pragma once
class ShapedRecipe{
	public:
		ShapedRecipe(ShapedRecipe&&);
		ShapedRecipe(int,int,std::vector<ItemInstance,std::allocator<ItemInstance>> const&,std::vector<ItemInstance,std::allocator<ItemInstance>> const&,mce::UUID const*);
		ShapedRecipe(int,int,std::vector<ItemInstance,std::allocator<ItemInstance>> const&,std::vector<ItemInstance,std::allocator<ItemInstance>> const&,mce::UUID const*);
		void assemble(CraftingContainer &);
		void assemble(CraftingContainer &);
		void generateUUID(void);
		void generateUUID(void);
		void getCraftingSize(void);
		void getCraftingSize(void);
		void getHeight(void);
		void getHeight(void);
		void getIngredient(int,int,int);
		void getIngredient(int,int,int);
		void getItems(void);
		void getMaxCraftCount(ItemPack const&);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void getResultItem(void);
		void getWidth(void);
		void getWidth(void);
		void isShapeless(void);
		void isShapeless(void);
		void matches(CraftingContainer &,Level &);
		void matches(CraftingContainer &,Level &);
		void matches(CraftingContainer &,int,int,bool);
		void matches(CraftingContainer &,int,int,bool);
		void setId(mce::UUID const&);
		void size(void);
		void size(void);
		void ~ShapedRecipe();
		void ~ShapedRecipe();
		void ~ShapedRecipe();
		void ~ShapedRecipe();
};
