#pragma once
class InsideCubeRenderer{
	public:
		InsideCubeRenderer(MinecraftClient &);
		InsideCubeRenderer(MinecraftClient &);
		void _determineBlocksToRenderTransition(std::vector<Vec3,std::allocator<Vec3>> &);
		void _determineBlocksToRenderTransition(std::vector<Vec3,std::allocator<Vec3>> &);
		void _determineBlocksToRenderVR(std::vector<Vec3,std::allocator<Vec3>> &,Vec3 const&,float);
		void _determineBlocksToRenderVR(std::vector<Vec3,std::allocator<Vec3>> &,Vec3 const&,float);
		void _rebuildCubeMesh(void);
		void _rebuildCubeMesh(void);
		void _renderSpecificCube(Vec3 &,Color &);
		void onAppResumed(void);
		void onAppResumed(void);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void render(float);
		void render(float);
		void ~InsideCubeRenderer();
		void ~InsideCubeRenderer();
		void ~InsideCubeRenderer();
		void ~InsideCubeRenderer();
};
