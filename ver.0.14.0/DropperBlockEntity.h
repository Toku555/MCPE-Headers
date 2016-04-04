#pragma once
class DropperBlockEntity{
	public:
		DropperBlockEntity(BlockPos);
		DropperBlockEntity(BlockPos,BlockEntityType);
		void _addItem(Container &,ItemInstance *,int);
		void _canPlaceItemInContainer(Container &,ItemInstance *,int,int);
		void _getContainerAt(BlockSource &,Vec3 const&);
		void _isFullContainer(Container &,int);
		void _tryMoveInItem(Container &,ItemInstance *,int,int);
		void getAttachedContainer(BlockSource &);
		void getName(void);
		void pushOutItems(BlockSource &,Container *);
		void ~DropperBlockEntity();
		void ~DropperBlockEntity();
};
