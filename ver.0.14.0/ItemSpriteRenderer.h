#pragma once
class ItemSpriteRenderer{
	public:
		ItemSpriteRenderer(TextureGroup &,Item *,bool);
		void buildQuad(Entity &,mce::Mesh &);
		void getIcon(Entity &);
		void isFoil(Entity const&);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void renderQuad(Entity &,mce::Mesh &,Vec3 const&,float,float);
		void ~ItemSpriteRenderer();
		void ~ItemSpriteRenderer();
};
