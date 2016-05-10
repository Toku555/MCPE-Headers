#pragma once
class RabbitRenderer{
	public:
		RabbitRenderer(std::unique_ptr<Model,std::default_delete<Model>>,mce::TextureGroup &,float);
		void getTexture(int);
		void render(Entity &,Vec3 const&,float,float);
		void ~RabbitRenderer();
		void ~RabbitRenderer();
};
