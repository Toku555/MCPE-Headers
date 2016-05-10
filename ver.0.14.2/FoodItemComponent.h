#pragma once
class FoodItemComponent{
	public:
		FoodItemComponent(Item &);
		void _applyEatEffects(ItemInstance &,Player &,Level &);
		void _loadEffects(std::vector<FoodItemComponent::Effect,std::allocator<FoodItemComponent::Effect>> &,Json::Value &);
		void getNutrition(void);
		void getSaturationModifier(void);
		void init(Json::Value &);
		void use(ItemInstance &,Player &);
		void useOn(ItemInstance &,Player &,BlockPos const&,signed char,Vec3 const&);
		void useTimeDepleted(ItemInstance &,Player &,Level &);
};
