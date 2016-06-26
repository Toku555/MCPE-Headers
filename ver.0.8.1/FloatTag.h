#pragma once
class FloatTag{
	public:
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput *);
		void toString(void);
		void write(IDataOutput *);
		void ~FloatTag();
		void ~FloatTag();
};
