#pragma once
class ItemPack{
	public:
		void add(int,int);
		void getCount(int);
		void getIdForItemInstance(ItemInstance const*);
		void getIdForItemInstanceAnyAux(ItemInstance const*);
		void getItemInstanceForId(int);
		void getItemInstances(void);
		void getMaxMultipliesOf(ItemPack&);
		void print(void);
};
