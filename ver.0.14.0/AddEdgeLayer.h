#pragma once
class AddEdgeLayer{
	public:
		AddEdgeLayer(uint,std::shared_ptr<Layer> &,AddEdgeLayer::Mode);
		void fillArea(LayerData &,int,int,int,int);
		void fillCoolWarm(LayerData &,int,int,int,int);
		void fillHeatIce(LayerData &,int,int,int,int);
		void fillIntroduceSpecial(LayerData &,int,int,int,int);
		void ~AddEdgeLayer();
		void ~AddEdgeLayer();
};
