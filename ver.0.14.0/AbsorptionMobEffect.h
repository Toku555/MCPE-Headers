#pragma once
class AbsorptionMobEffect{
	public:
		AbsorptionMobEffect(int,std::string const&,std::string const&,bool,int,int);
		void applyEffects(Mob *,int,int);
		void removeEffects(Mob *);
		void ~AbsorptionMobEffect();
		void ~AbsorptionMobEffect();
};
