#pragma once
class TripodCamera{
	public:
		TripodCamera(BlockSource &);
		void canInteractWith(Player &);
		void getEntityTypeId(void);
		void getHeadHeight(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void interactPreventDefault(void);
		void interactWithPlayer(Player &);
		void isPickable(void);
		void isPushable(void);
		void normalTick(void);
		void setOwner(Player *);
		void ~TripodCamera();
		void ~TripodCamera();
};
