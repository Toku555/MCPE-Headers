#pragma once
class MobEffectInstance{
	public:
		MobEffectInstance(int);
		MobEffectInstance(int,int);
		MobEffectInstance(int,int,int);
		MobEffectInstance(int,int,int,bool,bool);
		MobEffectInstance(void);
		void _tickDownDuration(void);
		void applyEffects(Mob *);
		void areAllEffectsAmbient(std::vector<MobEffectInstance,std::allocator<MobEffectInstance>> const&);
		void getAmplifier(void);
		void getColorValue(std::vector<MobEffectInstance,std::allocator<MobEffectInstance>> const&);
		void getDescriptionId(void);
		void getDisplayName(void);
		void getDuration(void);
		void getId(void);
		void getSplashDuration(void);
		void getSplashEffect(void);
		void isAmbient(void);
		void isEffectVisible(void);
		void isNoCounter(void);
		void isSplash(void);
		void load(CompoundTag *);
		void operator!=(MobEffectInstance const&);
		void operator==(MobEffectInstance const&);
		void removeEffects(Mob *);
		void save(void);
		void setNoCounter(bool);
		void setSplash(bool);
		void tick(Mob *);
		void toString(void);
		void update(MobEffectInstance const&);
};
