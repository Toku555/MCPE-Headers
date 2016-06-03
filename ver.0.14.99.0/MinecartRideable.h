#pragma once
class MinecartRideable{
	public:
		MinecartRideable(BlockSource &);
		MinecartRideable(BlockSource &);
		MinecartRideable(BlockSource &,Vec3 const&);
		MinecartRideable(BlockSource &,Vec3 const&);
		void activateMinecart(BlockPos const&,bool);
		void activateMinecart(BlockPos const&,bool);
		void canInteractWith(Player &);
		void canInteractWith(Player &);
		void getInteractText(Player &);
		void getInteractText(Player &);
		void getType(void);
		void getType(void);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void ~MinecartRideable();
		void ~MinecartRideable();
};
