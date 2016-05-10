#pragma once
class ShoreLayer{
	public:
		ShoreLayer(uint,std::shared_ptr<Layer> &);
		void _isJungleCompatible(int);
		void _isMesa(int);
		void _replaceIfNeighborOcean(LayerData &,int,int,int,int,int);
		void fillArea(LayerData &,int,int,int,int);
		void ~ShoreLayer();
		void ~ShoreLayer();
};
