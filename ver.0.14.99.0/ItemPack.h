#pragma once
class ItemPack{
	public:
		ItemPack(ItemPack&&);
		ItemPack(ItemPack&&);
		ItemPack(void);
		ItemPack(void);
		void add(int,int);
		void add(int,int);
		void getCount(int);
		void getCount(int);
		void getIdForItemInstance(ItemInstance const*);
		void getIdForItemInstance(ItemInstance const*);
		void getIdForItemInstanceAnyAux(ItemInstance const*);
		void getItemInstanceForId(int);
		void getItemInstances(void);
		void getItemInstances(void);
		void getMaxMultipliesOf(ItemPack const&);
		void getMaxMultipliesOf(ItemPack const&);
		void print(void);
		void print(void);
		void remove(int,int);
		void remove(int,int);
};
