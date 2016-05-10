#pragma once
namespace PotionBrewing{
	class Ingredient{
		public:
		void Ingredient(Item const*,int);
		void equals(ItemInstance const*);
		void getData(void);
		void getItemId(void);
		void addContainer(PotionBrewing::Ingredient const&);
		void addContainerRecipe(Item *,PotionBrewing::Ingredient const&,Item *);
		void addMix(std::shared_ptr<Potion const>,PotionBrewing::Ingredient const&,std::shared_ptr<Potion const> const&);
		void hasContainerMix(ItemInstance const*,ItemInstance const*);
		void hasMix(ItemInstance const*,ItemInstance const*);
		void hasPotionMix(ItemInstance const*,ItemInstance const*);
		void initPotionBrewing(void);
		void isContainerIngredient(ItemInstance const*);
		void isIngredient(ItemInstance const*);
		void isPotionIngredient(ItemInstance const*);
		void mix(ItemInstance const&,ItemInstance const&);
	}
};
