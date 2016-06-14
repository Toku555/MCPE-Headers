#pragma once
class SilverfishRenderer{
	public:
		SilverfishRenderer(mce::TextureGroup &);
		SilverfishRenderer(mce::TextureGroup &);
		SilverfishRenderer(mce::TextureGroup &,std::unique_ptr<SilverfishModel,std::default_delete<SilverfishModel>>);
		void getFlipDegrees(Mob &);
		void getFlipDegrees(Mob &);
		void ~SilverfishRenderer();
		void ~SilverfishRenderer();
};
