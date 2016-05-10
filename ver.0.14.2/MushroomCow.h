#pragma once
class MushroomCow{
	public:
		MushroomCow(BlockSource &);
		void canInteractWith(Player &);
		void createBreedOffspring(Animal &);
		void getEntityTypeId(void);
		void getInteractText(Player &);
		void interactWithPlayer(Player &);
		void ~MushroomCow();
		void ~MushroomCow();
};
