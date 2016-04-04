#pragma once
class ItemPack{
	public:
		ItemPack(ItemPack&&);
		ItemPack(void);
		void add(int,int);
		void getCount(int);
		void getIdForItemInstance(ItemInstance const*);
		void getIdForItemInstanceAnyAux(ItemInstance const*);
		void getItemInstanceForId(int);
		void getItemInstances(void);
		void getMaxMultipliesOf(ItemPack const&);
		void print(void);
		void remove(int,int);
};
