#pragma once
class BucketItem{
	public:
		BucketItem(int);
		void emptyBucket(Level *,int,int,int,int);
		void getDescriptionId(ItemInstance const*);
		void getIcon(int,int,bool);
		void getMaxStackSize(ItemInstance const*);
		void isEmissive(int);
		void isLiquidClipItem(int);
		void useOn(ItemInstance *,Player *,Level *,int,int,int,int,float,float,float);
		void ~BucketItem();
		void ~BucketItem();
};
