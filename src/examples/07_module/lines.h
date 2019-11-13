//line.h
#ifndef LINE_H
#define  LINE_H
#include"shape.h"

class LLine : public SShape
{
public:
	void draw() override;
};

#endif // !LINE_H