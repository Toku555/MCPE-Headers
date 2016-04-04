#pragma once
class BucketItem{
	public:
		BucketItem(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void emptyBucket(BlockSource *,FullBlock,int,int,int);
		void getIcon(int,int,bool);
		void getMaxStackSize(ItemInstance const*);
		void isEmissive(int);
		void isLiquidClipItem(int);
		void use(ItemInstance &,Player &);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void useTimeDepleted(ItemInstance *,Level *,Player *);
		void ~BucketItem();
		void ~BucketItem();
};
