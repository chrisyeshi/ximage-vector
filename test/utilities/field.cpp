#include "Field.h"

int main(void)
{
	float unitField[] = { 0.f, 0.f, 0.f, 0.f, 1.f, 1.f, 1.f, 1.f };
	Field<float> field(unitField, Vector<3, int>(2, 2, 2), Field<float>::Vertex);
	assert(fabs(field.interpolate(Vector<3, float>(0.f, 0.f, 0.f)) - 0.f) < 0.0001);

	field.setBuffer(unitField);
	field.setDimension(Vector<3, int>(2, 2, 2));
	// assert(fabs(field.interpolate(Vector<3, float>(1.f, 1.f, 1.f)) - 1.f) < 0.0001);

	field.set(unitField, Vector<3, int>(2, 2, 2));
	// assert(fabs(field.interpolate(Vector<3, float>(0.5, 0.5, 0.5)) - 0.5) < 0.0001);
	// std::cout << field.interpolate(Vector<3, float>(1.f, 1.f, 1.f)) << std::endl;

	return 0;
}