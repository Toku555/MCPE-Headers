#pragma once
class Attribute{
	public:
		Attribute(std::string const&,float,float,float,bool);
		Attribute(std::string const&,float,float,float,bool);
		void getByName(std::string const&);
		void getByName(std::string const&);
		void getDefaultValue(void);
		void getDefaultValue(void);
		void getMaxValue(void);
		void getMaxValue(void);
		void getMinValue(void);
		void getMinValue(void);
		void getName(void);
		void getName(void);
		void isClientSyncable(void);
		void isClientSyncable(void);
		void ~Attribute();
};
