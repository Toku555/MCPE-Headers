#pragma once
class Potion{
	public:
		Potion(std::string const&);
		Potion(std::string const&,MobEffectInstance const&);
		Potion(std::string const&,std::string const&,MobEffectInstance const&);
		Potion(void);
		void addPotion(std::shared_ptr<Potion const>);
		void appendFormattedPotionText(std::string &,bool);
		void effectPotencyToString(void);
		void getMobEffect(void);
		void getMobEffectId(void);
		void getName(bool);
		void getPotentencyDescription(bool);
		void getPotion(int);
		void getPotionId(void);
		void initPotions(void);
		void ~Potion();
};
