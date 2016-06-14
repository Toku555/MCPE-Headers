#pragma once
namespace j{
	class Model{
		public:
		void copyModelPart(ModelPart const&,ModelPart&);
		void registerParts(ModelPart &);
		void ~Model();
	}
};
