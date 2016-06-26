#pragma once
class GameRenderer{
	public:
		GameRenderer(Minecraft *);
		void bobHurt(float);
		void bobView(float);
		void getFov(float,bool);
		void moveCameraToPlayer(float);
		void pick(float);
		void render(float);
		void renderItemInHand(float,int);
		void renderLevel(float);
		void renderSky(LevelRenderer *,float,float);
		void saveMatrices(void);
		void setupCamera(float,int);
		void setupClearColor(float);
		void setupFog(int);
		void setupGuiScreen(bool);
		void tick(int,int);
		void tickFov(void);
		void unZoomRegion(void);
		void updateAllChunks(void);
		void updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void zoomRegion(float,float,float);
		void ~GameRenderer();
};
