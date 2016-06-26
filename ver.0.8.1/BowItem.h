#pragma once
class BowItem{
	public:
		void _getLaunchPower(int);
		void getAnimationFrameFor(Mob *);
		void getIcon(int,int,bool);
		void getMaxUseDuration(void);
		void getUseAnimation(void);
		void releaseUsing(ItemInstance *,Level *,Player *,int);
		void use(ItemInstance *,Level *,Player *);
		void ~BowItem();
		void ~BowItem();
};
