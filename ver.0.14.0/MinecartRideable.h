#pragma once
class MinecartRideable{
	public:
		MinecartRideable(BlockSource &);
		MinecartRideable(BlockSource &,Vec3 const&);
		void activateMinecart(BlockPos const&,bool);
		void canInteractWith(Player &);
		void getInteractText(Player &);
		void getType(void);
		void interactWithPlayer(Player &);
		void ~MinecartRideable();
		void ~MinecartRideable();
};
