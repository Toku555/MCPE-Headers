#pragma once
class EntityRenderDispatcher{
	public:
		EntityRenderDispatcher(void);
		void assign(EntityRendererId,EntityRenderer *);
		void destroy(void);
		void distanceToSqr(float,float,float);
		void getFont(void);
		void getInstance(void);
		void getRenderer(Entity *);
		void getRenderer(EntityRendererId);
		void prepare(Level *,Font *,Mob *,Options *,float);
		void render(Entity *,float);
		void render(Entity *,float,float,float,float,float);
		void setLevel(Level *);
		void setMinecraft(Minecraft *);
		void ~EntityRenderDispatcher();
};
