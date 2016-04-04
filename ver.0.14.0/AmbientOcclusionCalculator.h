#pragma once
class AmbientOcclusionCalculator{
	public:
		AmbientOcclusionCalculator(BlockPos const&,Block &,BlockTessallatorCache &);
		void _blend(int,int,int,int);
		void _getShadeBrightness(BlockPos const&);
		void _isSolidRender(BlockPos const&);
		void _notOccludedBy(BlockPos const&,BlockPos const&);
		void calculate(signed char,bool);
		void getShadingForFace(signed char);
		void isTranslucent(BlockPos const&);
		void setBaseColor(Color const&);
		void setCornerPositions(BlockPos *);
		void setLightColorPositions(BlockPos *);
		void setOutputColors(Color *);
		void setOutputLightTexturePositions(uint *);
		void setSeasons(bool);
		void setTintSides(bool);
		void setTouchEdge(bool);
};
