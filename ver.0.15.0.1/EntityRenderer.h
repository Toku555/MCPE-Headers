#pragma once
class EntityRenderer{
	public:
		EntityRenderer(mce::TextureGroup &,bool);
		EntityRenderer(mce::TextureGroup &,bool);
		void _emitFlame(Entity &,float);
		void _emitSmoke(Entity &,float);
		void getAtlasTexture(void);
		void getAtlasTexture(void);
		void getFont(void);
		void hasWaterHole(void);
		void hasWaterHole(void);
		void init(EntityRenderDispatcher *);
		void init(EntityRenderDispatcher *);
		void isFancy(void);
		void postRender(Entity &,Vec3 const&,float,float);
		void postRender(Entity &,Vec3 const&,float,float);
		void renderDebug(Entity &,Options &);
		void renderDebug(Entity &,Options &);
		void renderLeash(Entity &,Vec3 const&,float,float);
		void renderLeash(Entity &,Vec3 const&,float,float);
		void renderText(Entity &,std::string const&,float,float);
		void renderText(Entity &,std::string const&,float,float);
		void renderText(std::string const&,Vec3 const&,Color const&,mce::MaterialPtr *,mce::MaterialPtr *);
		void renderText(std::string const&,Vec3 const&,Color const&,mce::MaterialPtr *,mce::MaterialPtr *);
		void renderWaterHole(Entity &,Vec3 const&,Vec2 const&,float);
		void renderWaterHole(Entity &,Vec3 const&,Vec2 const&,float);
		void ~EntityRenderer();
		void ~EntityRenderer();
		void ~EntityRenderer();
		void ~EntityRenderer();
};
