#pragma once
namespace ItemFrameRenderer{
	class FaceUV{
		public:
		void scaleToIcon(TextureUVCoordinateSet const&);
		ItemFrameRenderer(mce::TextureGroup &);
		void buildBox(AABB const&,std::vector<ItemFrameRenderer::FaceUV,std::allocator<ItemFrameRenderer::FaceUV>> &,TextureUVCoordinateSet const&);
		void buildFrameMesh(void);
		void buildMapFrameMesh(void);
		void drawFrame(BlockSource &,ItemFrameBlockEntity &,bool);
		void drawItem(BlockSource &,ItemFrameBlockEntity &,float);
		void onAppSuspended(void);
		void render(BlockSource &,BlockEntity &,Vec3 const&,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void renderName(ItemFrameBlockEntity &,Vec3 const&,float);
		void ~ItemFrameRenderer();
		void ~ItemFrameRenderer();
	}
};
