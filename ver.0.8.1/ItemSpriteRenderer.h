#pragma once
class ItemSpriteRenderer{
	public:
		ItemSpriteRenderer(Item *);
		void onAppSuspended(void);
		void render(Entity *,float,float,float,float,float);
		void ~ItemSpriteRenderer();
		void ~ItemSpriteRenderer();
};
