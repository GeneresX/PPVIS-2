#pragma once
#include <iostream>

using namespace std;

namespace zoo
{
	class Animal {
	public:
		const char* show_organism_category();
	};

	//закрытое 
	class Carnivores : private Animal {
	public:
		const char* show_food_type();
		void show_organism_name();
	};

	//защищенное
	class Predator : protected Carnivores {
	public:
		virtual const char* show_predator_type();
		void show_food();
		void show_organism();
		
	};

	//Открытое
	class Lion :public virtual Predator {
	public:
		public:
			const char* show_predator_type () override;
	};
	
	//закрытое
	class Tiger : public virtual Predator {
	public:
		const char* show_predator_type() override;
	};

	//множественное + защищенное
	class Liger : public Tiger, public Lion {
	public:
		const char* show_predator_type();
	};
}
