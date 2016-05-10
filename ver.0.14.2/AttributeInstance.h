#pragma once
class AttributeInstance{
	public:
		AttributeInstance(BaseAttributeMap *,Attribute const*);
		AttributeInstance(void);
		void _calculateValue(AttributeBuff const&);
		void _calculateValue(void);
		void _getAppliedModifiers(int);
		void _sanitizeValue(float);
		void _setDirty(void);
		void addBuff(AttributeBuff const&);
		void addBuff(std::shared_ptr<AttributeBuff>);
		void addModifier(AttributeModifier const&);
		void addModifier(std::shared_ptr<AttributeModifier>);
		void addModifiers(std::vector<std::shared_ptr<AttributeModifier>,std::allocator<std::shared_ptr<AttributeModifier>>> *);
		void getAttribute(void);
		void getBuffs(void);
		void getCurrentValue(void);
		void getDefaultValue(int);
		void getHandle(void);
		void getListeners(void);
		void getMaxValue(void);
		void getMinValue(void);
		void getModifier(mce::UUID const&);
		void getModifiers(int);
		void getModifiers(std::string const&);
		void getModifiers(void);
		void hasModifier(AttributeModifier const&);
		void hasModifier(std::shared_ptr<AttributeModifier>);
		void hasTemporalBuffs(void);
		void notify(long long);
		void registerListener(AttributeInstance const&);
		void removeBuff(AttributeBuff const&);
		void removeBuff(std::shared_ptr<AttributeBuff>);
		void removeBuffs(void);
		void removeModifier(AttributeModifier const&);
		void removeModifier(std::shared_ptr<AttributeModifier>);
		void removeModifiers(std::string const&);
		void removeModifiers(void);
		void resetToDefaultValue(int);
		void resetToMaxValue(void);
		void resetToMinValue(void);
		void serializationSetRange(float,float,float);
		void serializationSetValue(float,int);
		void setDefaultValue(float,int);
		void setDelegate(std::shared_ptr<AttributeInstanceDelegate>);
		void setMaxValue(float);
		void setMinValue(float);
		void setRange(float,float,float);
		void tick(void);
		void ~AttributeInstance();
		void ~AttributeInstance();
};
