#pragma once
class EntityRenderer{
	public:
		EntityRenderer(void);
		void bindTexture(std::string const&);
		void getFont(void);
		void init(EntityRenderDispatcher *);
		void isFancy(void);
		void postRender(Entity *,float,float,float,float,float);
		void render(AABB const&,float,float,float);
		void renderFlame(Entity *,float,float,float,float);
		void renderFlat(AABB const&);
		void renderName(Entity *,float);
		void ~EntityRenderer();
		void ~EntityRenderer();
};
