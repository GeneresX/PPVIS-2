#pragma once
#include <iostream>

using namespace std;

namespace zoo
{
	class Animal {
	public:
		const char* show_organism_category();
	};

	//�������� 
	class Carnivores : private Animal {
	public:
		const char* show_food_type();
		void show_organism_name();
	};

	//����������
	class Predator : protected Carnivores {
	public:
		virtual const char* show_predator_type();
		void show_food();
		void show_organism();
		
	};

	//��������
	class Lion :public virtual Predator {
	public:
		public:
			const char* show_predator_type () override;
	};
	
	//��������
	class Tiger : public virtual Predator {
	public:
		const char* show_predator_type() override;
	};

	//������������� + ����������
	class Liger : public Tiger, public Lion {
	public:
		const char* show_predator_type();
	};
}
