#include "QmlMaterial_Export.h"

// Делаем такую штуку, чтобы сгенерилась библиотека под MSVC
class QmlMaterial_EXPORT FakeClass {
public:
	int a() { return _a; }
	void setA(int a) { _a = a; }

private:
	int _a;
};


int main(int argc, char** argv) {
	FakeClass fake;
	fake.setA(0);
	return fake.a();
}
