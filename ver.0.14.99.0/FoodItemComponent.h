#pragma once
class FoodItemComponent{
	public:
		FoodItemComponent(Item &);
		FoodItemComponent(Item &);
		void _applyEatEffects(ItemInstance &,Player &,Level &);
		void _applyEatEffects(ItemInstance &,Player &,Level &);
		void _loadEffects(std::vector<FoodItemComponent::Effect,std::allocator<FoodItemComponent::Effect>> &,Json::Value &);
		void _loadEffects(std::vector<FoodItemComponent::Effect,std::allocator<FoodItemComponent::Effect>> &,Json::Value &);
		void getNutrition(void);
		void getNutrition(void);
		void getSaturationModifier(void);
		void getSaturationModifier(void);
		void init(Json::Value &);
		void init(Json::Value &);
		void use(ItemInstance &,Player &);
		void use(ItemInstance &,Player &);
		void useOn(ItemInstance &,Player &,BlockPos const&,signed char,Vec3 const&);
		void useOn(ItemInstance &,Player &,BlockPos const&,signed char,Vec3 const&);
		void useTimeDepleted(ItemInstance &,Player &,Level &);
		void useTimeDepleted(ItemInstance &,Player &,Level &);
};
