#pragma once
namespace j{
	class AttributeInstance{
		public:
		void addBuff(AttributeBuff const&);
		void addModifier(AttributeModifier const&);
		void getCurrentValue(void);
		void removeModifier(AttributeModifier const&);
		void removeModifier(mce::UUID const&);
		void resetToDefaultValue(int);
		void resetToMaxValue(void);
		void serializationSetValue(float,int);
		void setDefaultValue(float,int);
		void setRange(float,float,float);
	}
};
