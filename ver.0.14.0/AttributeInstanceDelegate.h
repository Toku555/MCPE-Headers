#pragma once
class AttributeInstanceDelegate{
	public:
		AttributeInstanceDelegate(AttributeInstance const&);
		void _getInstance(void);
		void _getMutableInstance(void);
		void change(float,float,AttributeBuffInfo);
		void getBuffValue(AttributeBuff const&);
		void notify(long long);
		void tick(void);
		void ~AttributeInstanceDelegate();
		void ~AttributeInstanceDelegate();
};
