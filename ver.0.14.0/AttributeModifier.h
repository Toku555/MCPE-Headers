#pragma once
class AttributeModifier{
	public:
		AttributeModifier(mce::UUID,std::string const&,float,int,int,bool);
		AttributeModifier(void);
		void getAmount(void);
		void getId(void);
		void getName(void);
		void getOperand(void);
		void getOperation(void);
		void isInstantaneous(void);
		void isSerializable(void);
		void operator!=(AttributeModifier const&);
		void operator=(AttributeModifier const&);
		void operator==(AttributeModifier const&);
		void setSerialize(bool);
		void ~AttributeModifier();
		void ~AttributeModifier();
};
