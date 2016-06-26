#pragma once
class TripodCamera{
	public:
		TripodCamera(Level *,Player *,float,float,float);
		void getBaseSpeed(void);
		void getEntityTypeId(void);
		void getShadowHeightOffs(void);
		void interactPreventDefault(void);
		void interactWithPlayer(Player *);
		void isPickable(void);
		void isPushable(void);
		void tick(void);
		void ~TripodCamera();
		void ~TripodCamera();
};
