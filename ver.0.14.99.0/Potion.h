#pragma once
class Potion{
	public:
		Potion(std::string const&);
		Potion(std::string const&);
		Potion(std::string const&,MobEffectInstance const&);
		Potion(std::string const&,std::string const&,MobEffectInstance const&);
		Potion(void);
		void addPotion(std::shared_ptr<Potion const>);
		void appendFormattedPotionText(std::string &,bool,float);
		void appendFormattedPotionText(std::string &,bool,float);
		void effectDurationToString(bool,float);
		void effectDurationToString(bool,float);
		void effectPotencyToString(void);
		void effectPotencyToString(void);
		void getDescriptionId(void);
		void getDescriptionId(void);
		void getMobEffect(void);
		void getMobEffect(void);
		void getMobEffectId(void);
		void getMobEffectId(void);
		void getName(bool);
		void getName(bool);
		void getPotentencyDescription(bool,float);
		void getPotentencyDescription(bool,float);
		void getPotion(int);
		void getPotion(int);
		void getPotionCount(void);
		void getPotionCount(void);
		void getPotionId(void);
		void getPotionId(void);
		void getPrefix(void);
		void getPrefix(void);
		void initPotions(void);
		void initPotions(void);
};
