#pragma once
class FishingRodItem{
	public:
		FishingRodItem(std::string const&,int);
		void getAnimationFrameFor(Mob &);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void getIcon(int,int,bool);
		void getInteractText(void);
		void isHandEquipped(void);
		void isMirroredArt(void);
		void requiresInteract(void);
		void use(ItemInstance &,Player &);
		void ~FishingRodItem();
		void ~FishingRodItem();
};
