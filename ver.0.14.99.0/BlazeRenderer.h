#pragma once
class BlazeRenderer{
	public:
		BlazeRenderer(mce::TextureGroup &);
		BlazeRenderer(mce::TextureGroup &);
		BlazeRenderer(mce::TextureGroup &,std::unique_ptr<Model,std::default_delete<Model>>);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~BlazeRenderer();
		void ~BlazeRenderer();
};
