#pragma once
class EntityRenderer{
	public:
		EntityRenderer(mce::TextureGroup &,bool);
		void _emitFlame(Entity &,float);
		void _emitSmoke(Entity &,float);
		void getFont(void);
		void hasWaterHole(void);
		void init(EntityRenderDispatcher *);
		void isFancy(void);
		void postRender(Entity &,Vec3 const&,float,float);
		void renderDebug(Entity &,Options &);
		void renderText(Entity &,std::string const&,float,float);
		void renderText(std::string const&,Vec3 const&,Color const&,mce::MaterialPtr *,mce::MaterialPtr *);
		void renderWaterHole(Entity &,Vec3 const&,Vec2 const&,float);
		void ~EntityRenderer();
		void ~EntityRenderer();
};
