#pragma once
namespace j{
	class ItemInstance{
		public:
		void add(int);
		void getAttackDamage(void);
		void getDestroySpeed(Block *);
		void getIcon(int,bool);
		void getId(void);
		void getIdAuxEnchanted(void);
		void hurtAndBreak(int,Mob *);
		void isNull(void);
		void operator=(ItemInstance const&);
		void operator=(ItemInstance const&);
		void remove(int);
		void setAuxValue(short);
		void setNull(void);
	}
};
