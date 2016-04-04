#pragma once
class TemporalAttributeBuff{
	public:
		TemporalAttributeBuff(float,int,AttributeBuffType,bool,std::string const&);
		void getBaseAmount(void);
		void getDuration(void);
		void getLifeTimer(void);
		void isComplete(void);
		void isInstantaneous(void);
		void isSerializable(void);
		void serializationSetLifeTime(int);
		void setDurationAmplifier(std::shared_ptr<Amplifier>);
		void shouldBuff(void);
		void tick(void);
		void ~TemporalAttributeBuff();
		void ~TemporalAttributeBuff();
};
