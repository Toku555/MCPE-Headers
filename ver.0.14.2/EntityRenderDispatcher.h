#pragma once
class EntityRenderDispatcher{
	public:
		EntityRenderDispatcher(MinecraftClient &);
		void createInstance(MinecraftClient &);
		void destroyInstance(void);
		void getCameraEntity(void);
		void getCameraRot(void);
		void getCrosshairPickEntity(void);
		void getFont(void);
		void getInstance(void);
		void getItemInHandRenderer(void);
		void getMinecraftClient(void);
		void getOffset(void);
		void getRenderer(Entity &);
		void getRenderer(EntityRendererId);
		void onAppSuspended(void);
		void prepare(Level *,Font *,Entity *,Entity *,Options *,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,float);
		void renderDebug(Entity &);
		void setCameraTargetPos(Vec3 const&);
		void setLevel(Level *);
		void ~EntityRenderDispatcher();
		void ~EntityRenderDispatcher();
};
