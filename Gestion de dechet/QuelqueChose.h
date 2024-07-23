#pragma once
#include"Dechet.h"

class QuelqueChose :
	public Dechet {

public:
	QuelqueChose() :Dechet(0, "???", 0, "rouge", INCONNU, 0, 1, 0) {};
	~QuelqueChose() {};
	QuelqueChose(const QuelqueChose& dechet) :Dechet(dechet) {};
};
