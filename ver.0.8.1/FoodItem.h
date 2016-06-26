#pragma once
class FoodItem{
	public:
		void getMaxUseDuration(void);
		void getUseAnimation(void);
		void isFood(void);
		void use(ItemInstance *,Level *,Player *);
		void useTimeDepleted(ItemInstance *,Level *,Player *);
		void ~FoodItem();
		void ~FoodItem();
};
