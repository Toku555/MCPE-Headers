#pragma once
class SimpleFoodData{
	public:
		SimpleFoodData(void);
		void eat(FoodItem *);
		void eat(int);
		void tick(Player *);
};
