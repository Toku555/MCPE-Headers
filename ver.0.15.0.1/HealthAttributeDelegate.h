#pragma once
class HealthAttributeDelegate{
	public:
		HealthAttributeDelegate(AttributeInstance const&,Mob *);
		HealthAttributeDelegate(AttributeInstance const&,Mob *);
		void change(float,float,AttributeBuffInfo);
		void change(float,float,AttributeBuffInfo);
		void getBuffValue(AttributeBuff const&);
		void getBuffValue(AttributeBuff const&);
		void tick(void);
		void tick(void);
		void ~HealthAttributeDelegate();
		void ~HealthAttributeDelegate();
};
