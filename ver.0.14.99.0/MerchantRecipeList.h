#pragma once
class MerchantRecipeList{
	public:
		MerchantRecipeList(CompoundTag const*);
		MerchantRecipeList(CompoundTag const*);
		MerchantRecipeList(void);
		void addIfNewOrBetter(MerchantRecipe *);
		void addIfNewOrBetter(MerchantRecipe *);
		void createFromStream(FriendlyByteBuf *);
		void createTag(void);
		void createTag(void);
		void getMatchingRecipeFor(ItemInstance *,ItemInstance *,ItemInstance *);
		void getMatchingRecipeFor(ItemInstance *,ItemInstance *,ItemInstance *);
		void getRecipeFor(ItemInstance *,ItemInstance *,int);
		void getRecipeFor(ItemInstance *,ItemInstance *,int);
		void load(CompoundTag const*);
		void load(CompoundTag const*);
		void writeToStream(FriendlyByteBuf *);
		void writeToStream(FriendlyByteBuf *);
		void ~MerchantRecipeList();
		void ~MerchantRecipeList();
		void ~MerchantRecipeList();
		void ~MerchantRecipeList();
};
