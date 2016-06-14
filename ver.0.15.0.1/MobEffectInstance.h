#pragma once
class MobEffectInstance{
	public:
		MobEffectInstance(int);
		MobEffectInstance(int);
		MobEffectInstance(int,int);
		MobEffectInstance(int,int);
		MobEffectInstance(int,int,int);
		MobEffectInstance(int,int,int);
		MobEffectInstance(int,int,int,bool,bool);
		MobEffectInstance(int,int,int,bool,bool);
		MobEffectInstance(void);
		void _tickDownDuration(void);
		void applyEffects(Mob *);
		void applyEffects(Mob *);
		void areAllEffectsAmbient(std::vector<MobEffectInstance,std::allocator<MobEffectInstance>> const&);
		void areAllEffectsAmbient(std::vector<MobEffectInstance,std::allocator<MobEffectInstance>> const&);
		void getAmplifier(void);
		void getAmplifier(void);
		void getColorValue(std::vector<MobEffectInstance,std::allocator<MobEffectInstance>> const&);
		void getColorValue(std::vector<MobEffectInstance,std::allocator<MobEffectInstance>> const&);
		void getDescriptionId(void);
		void getDisplayName(void);
		void getDisplayName(void);
		void getDuration(void);
		void getDuration(void);
		void getId(void);
		void getId(void);
		void getSplashDuration(void);
		void getSplashDuration(void);
		void getSplashEffect(void);
		void getSplashEffect(void);
		void isAmbient(void);
		void isEffectVisible(void);
		void isEffectVisible(void);
		void isNoCounter(void);
		void isNoCounter(void);
		void isSplash(void);
		void load(CompoundTag *);
		void load(CompoundTag *);
		void operator!=(MobEffectInstance const&);
		void operator!=(MobEffectInstance const&);
		void operator<(MobEffectInstance const&);
		void operator==(MobEffectInstance const&);
		void removeEffects(Mob *);
		void removeEffects(Mob *);
		void save(void);
		void save(void);
		void setDuration(int);
		void setDuration(int);
		void setNoCounter(bool);
		void setSplash(bool);
		void tick(Mob *);
		void tick(Mob *);
		void toString(void);
		void update(MobEffectInstance const&);
		void update(MobEffectInstance const&);
};