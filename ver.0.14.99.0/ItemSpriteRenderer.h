#pragma once
class ItemSpriteRenderer{
	public:
		ItemSpriteRenderer(mce::TextureGroup &,Item *,bool);
		ItemSpriteRenderer(mce::TextureGroup &,Item *,bool);
		ItemSpriteRenderer(mce::TextureGroup &,Item *,bool);
		void buildQuad(Entity &,mce::Mesh &);
		void buildQuad(Entity &,mce::Mesh &);
		void getIcon(Entity &);
		void getIcon(Entity &);
		void isGlint(Entity const&);
		void isGlint(Entity const&);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void renderQuad(Entity &,mce::Mesh &,Vec3 const&,float,float);
		void renderQuad(Entity &,mce::Mesh &,Vec3 const&,float,float);
		void ~ItemSpriteRenderer();
		void ~ItemSpriteRenderer();
		void ~ItemSpriteRenderer();
		void ~ItemSpriteRenderer();
};
