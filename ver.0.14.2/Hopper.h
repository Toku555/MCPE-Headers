#pragma once
class Hopper{
	public:
		Hopper(int);
		void _addItem(Container &,ItemEntity &);
		void _addItem(Container &,ItemInstance *,int);
		void _canPlaceItemInContainer(Container &,ItemInstance *,int,int);
		void _canTakeItemFromContainer(Container &,ItemInstance *,int,int);
		void _getAttachedContainer(BlockSource &,Vec3 const&,int);
		void _getSourceContainer(BlockSource &,Vec3 const&);
		void _isEmptyContainer(Container &,int);
		void _isFullContainer(Container &,int);
		void _pullInItems(BlockSource &,Container &,Vec3 const&);
		void _pushOutItems(BlockSource &,Container &,Vec3 const&,int);
		void _tryMoveInItem(Container &,ItemInstance *,int,int);
		void _tryMoveItems(BlockSource &,Container &,Vec3 const&,int,bool);
		void _tryTakeInItemFromSlot(Container &,Container &,int,int);
		void isAttachedContainer(BlockSource &,BlockPos const&,Container &);
		void isOnCooldown(void);
		void setCooldown(int);
};
