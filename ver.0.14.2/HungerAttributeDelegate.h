#pragma once
class HungerAttributeDelegate{
	public:
		HungerAttributeDelegate(AttributeInstance const&,Player *);
		void notify(long long);
		void tick(void);
		void ~HungerAttributeDelegate();
		void ~HungerAttributeDelegate();
};
