#pragma once
namespace j{
	class ItemInHandRenderer{
		public:
		void _renderLeftHand(PlayerRenderer &,float);
		void rebuildItem(Mob *,ItemInstance const&,int);
		void tick(void);
		void ~ItemInHandRenderer();
	}
};
