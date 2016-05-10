#pragma once
class EnchantingScreenController{
	public:
		void _isOptionSelectable(int);
		void _isOptionUnselectable(int);
		void _isStillValid(void);
		void _onOptionButtonClicked(PropertyBag *);
		void _registerAutoPlaceOrder(void);
		void _registerCoalesceOrder(void);
		void onOpen(void);
		void ~EnchantingScreenController();
		void ~EnchantingScreenController();
};
