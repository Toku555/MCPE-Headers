#pragma once
class MobEffect{
	public:
		MobEffect(int,std::string,std::string const&,bool,int,int);
		void _createAttributeModifer(std::shared_ptr<AttributeModifier> const&,int);
		void _createInstantBuff(std::shared_ptr<AttributeBuff> const&,int,float);
		void _createTemporalBuff(std::shared_ptr<AttributeBuff> const&,int,int);
		void addAttributeBuff(Attribute const&,std::shared_ptr<AttributeBuff>);
		void addAttributeModifier(Attribute const&,std::shared_ptr<AttributeModifier>);
		void applyEffects(Mob *,int,int);
		void applyInstantaneousEffect(Entity *,Entity *,Mob *,int,float);
		void clearAttributeBuffs(void);
		void clearAttributeModifiers(void);
		void formatDuration(MobEffectInstance const*);
		void getAttributeModifierValue(int,AttributeModifier const&);
		void getByName(std::string const&);
		void getColor(void);
		void getDescriptionId(void);
		void getDurationModifier(void);
		void getIcon(void);
		void getId(void);
		void hasIcon(void);
		void initEffects(void);
		void isDisabled(void);
		void isHarmful(void);
		void isInstantaneous(void);
		void removeEffects(Mob *);
		void setDurationAmplifier(std::shared_ptr<Amplifier>);
		void setValueAmplifier(std::shared_ptr<Amplifier>);
		void teardownEffects(void);
		void viewAttributeModifiers(void);
		void ~MobEffect();
		void ~MobEffect();
};
