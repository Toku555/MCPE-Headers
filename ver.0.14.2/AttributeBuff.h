#pragma once
class AttributeBuff{
	public:
		AttributeBuff(float,int,AttributeBuffType);
		void getAmount(void);
		void getId(void);
		void getInfo(void);
		void getOperand(void);
		void getType(void);
		void operator==(AttributeBuff const&);
		void setAmplificationAmount(int,float);
		void setDurationAmplifier(std::shared_ptr<Amplifier>);
		void setId(uint);
		void setOperand(int);
		void setSource(Entity *);
		void setValueAmplifier(std::shared_ptr<Amplifier>);
		void ~AttributeBuff();
		void ~AttributeBuff();
};
