#pragma once
class BowItem{
	public:
		BowItem(std::string const&,int);
		void _getLaunchPower(int);
		void getAnimationFrameFor(Mob &);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void getIcon(int,int,bool);
		void releaseUsing(ItemInstance *,Player *,int);
		void use(ItemInstance &,Player &);
		void ~BowItem();
		void ~BowItem();
};
